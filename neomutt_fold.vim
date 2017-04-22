" Copyright 2001-2017 Richard Russon.

let s:function_global   = '●'
let s:function_static   = '○'

let s:neo_show_prefix = 0
let s:neo_show_name   = 0
let s:neo_show_args   = 1
let s:neo_show_return = 0
let s:neo_show_lines  = 0

let s:prefix_comment    = '--> '
let s:prefix_function   = '●'
let s:prefix_array      = '□'
let s:prefix_struct     = '⧋'
let s:prefix_enum       = '☰'
let s:abbreviation      = '...'

let s:prefix_copyright  = '© Copyright'

let s:function_method   = '●'
let s:function_local    = '○'
" let s:function_static   = '∗'
let s:function_static   = '○'

function! neomutt_fold#FoldLevel (lnum)
	let prev = getline (a:lnum - 1)
	let line = getline (a:lnum)
	let next = getline (a:lnum + 1)
	let nex2 = getline (a:lnum + 2)
	let nex3 = getline (a:lnum + 3)
	let nex4 = getline (a:lnum + 4)
	let nex5 = getline (a:lnum + 5)
	let nex6 = getline (a:lnum + 6)
	let nex7 = getline (a:lnum + 7)
	let nex8 = getline (a:lnum + 8)

	" Ignore preprocessor
	if (line =~ '^#') " #
		return '='
	endif

	" Ignore one-line C comments
	if (line =~ '^.*/\*\*<.*$') " /**<
		return '='
	endif
	if (line =~ '^\s*/\*.*\*/.*$') " /* */
		return '='
	endif

	" Very specific comment blocks
	if (line =~ '^/\* Copyright.*')
		let level = '>4'

	elseif (line =~ '^/\*\*$') " /**
		let level = '>3'

	elseif (line =~ '^\s*/\*.*$') " /*
		let level = 'a1'

	elseif (line =~ ' = {$')
		let level = '>1'
	" elseif ((prev =~ ',$') && (line == '};'))
	elseif (prev == '};')
		let level = '<1'

	" elseif (line =~ '/\*\( .*\)\?$') " /*
	" 	let level = 'a1'
	" elseif (line =~ '/\*\s') " /*<space>
	" 	let level = 'a1'

	elseif ((line =~ '^\S.*(.*[^)]$') && ((next == '{') || (nex2 == '{') || (nex3 == '{') || (nex4 == '{') || (nex5 == '{') || (nex6 == '{') || (nex7 == '{') || (nex8 == '{')))
	" elseif ((line =~ '^\S.*(.*$') && ((next == '{') || (nex2 == '{') || (nex3 == '{') || (nex4 == '{') || (nex5 == '{') || (nex6 == '{') || (nex7 == '{') || (nex8 == '{')))
		let level = '>2'

	elseif (line =~ '^\S.*(.*)$')
		let level = '2'

	elseif ((prev == "") && (next == '{'))
		let level = 'a1'

	elseif (line == '{')
		let level = '1'

	elseif ((prev[0] == '}') && (line == ''))
	 	let level = '<1'

	elseif ((line =~ '^ \*/') && (a:lnum < 20))
		let level = '<1'

	elseif (line =~ '\*/')
		let level = '<2'
	" elseif (line =~ '\*/')
	" 	let level = '1'

	else
		let level = '='
	endif
	" echomsg 'line: ' . (a:lnum-1) . ' ' . foldlevel(a:lnum-1)

	return level
endfunction

function! s:FoldFunction (lnum)
	let func = ''
	for i in range (a:lnum, a:lnum+8)
		let line = getline(i)
		if (line[0] == '{')
			break
		endif
		let func .= line
	endfor

	let func = substitute (func, '^static ', '', '')

	if (s:neo_show_args == 1)
		let func = substitute (func, ', *[^,]\+[ *]', ',', 'g')
		let func = substitute (func, '( *[^,]\+[ *]', '(', '')
	else
		let func = substitute (func, '(.*', '', '')
	endif

	if (s:neo_show_return == 1)
		let func = substitute (func, '\(.\{-\}\**\) *\(\<\i\+\((.*\)*\)$', '\2 -> \1', '')
	else
		let func = substitute (func, '.*\(\<\i\+\((.*\)*\)$', '\1', '')
	endif

	let prev = getline (a:lnum - 1)
	if ((s:neo_show_name == 0) && (prev != ''))
		let func = substitute (func, '\i\+(', '  (', '')
	endif

	return func
endfunction

function! s:FoldComment (lnum)
	let list = []
	let line = getline (a:lnum)

	" Keep track of the leading whitespace (converted to spaces)
	let space = substitute (line, '\(\s*\).*', '\1', '')
	let space = substitute (space, '\t', '        ', 'g')

	" Trim opening comment marker /* or /**
	let line = substitute (line, '^\s*/\*\+\s*', '', '')
	if (!empty (line))
		let list += [ line ]
	endif

	" Examine the next three lines
	for i in range (a:lnum+1, a:lnum+3)
		let line = getline(i)
		let line = substitute (line, '\v(struct|enum) ', '', '')
		if (line =~ '^\s*\*\/\s*$')
			" Found */ stop here
			break
		endif
		" Trim leading whitespace and comment marker *
		let line = substitute (line, '^\s*\*\s*', '', '')
		if (line =~ '.*\*\/\s*$')
			" Line ends */ trim it and leading whitespace
			let line = substitute (line, '\*/\s*$', '', '')
			let list += [ line ]
			break
		endif

		if (!empty (line))
			let list += [ line ]
		endif
	endfor

	let result = space . s:prefix_comment . join (list, " ")

	" Truncate comment to screen width
	" This doesn't take into account foldcolumn and numberwidth settings
	let c = min ([winwidth(0), 80]) - 4
	if (len (result) > c)
		let result = result[0:c] . "..."
	endif

	return result
endfunction

function! s:FoldInclude (line, count)
	if (&foldlevel < 2)
		return '#include'
	endif

	if (a:line =~ '^#include ".*')
		let text = '""'
	elseif (a:line =~ '^#include <.*\.h>')
		let text = '<h>'
	else
		let text = '<>'
	endif

	let text = '#include ' . text . ' (' . a:count . ')'
	return text
endfunction

function! s:FoldGetFunctionIcon (lnum)

	for i in range (a:lnum, a:lnum+20)
		let line = getline(i)
		if (line =~ '^}')
			break
		elseif (line =~ '^static.*')
			return s:function_static
		elseif (line =~ '\v^(typedef )*enum.*')
			return s:prefix_enum
		elseif (line =~ '\v^(typedef )*struct.*')
			return s:prefix_struct
		elseif (line =~ '^__attribute__.*')
			continue
		elseif (line =~ '^\i\+::\~*\i\+\s*(.*')
			return s:function_method
		elseif (line =~ '^\i\+::operator.*')
			return s:function_method
		elseif (line =~ '^operator.*')
			return s:function_local
		elseif (line =~ '^\i\+\s*(.*')
			return s:function_local
		endif
	endfor

	return s:prefix_function
endfunction

function! neomutt_fold#FoldText (lnum)
	let prev = getline (a:lnum - 1)
	let line = getline (a:lnum)
	let next = getline (a:lnum + 1)

	if (line =~ '^/\*\*$')
		" Function block
		let next = substitute (next, '^\s\+\*\s*', '', '')
		let next = substitute (next, '\v<(struct|enum)> *', '', '')
		let icon = s:FoldGetFunctionIcon (v:foldstart+1)
		return icon . ' ' . next
	endif

	if (line =~ ' = {$')
		let line = substitute (line, ' = {', '', '')
		let line = substitute (line, '^static *', '', '')
		let line = substitute (line, '^const *', '', '')
		let icon = s:FoldGetFunctionIcon (v:foldstart+1)
		return icon . ' ' . line
	endif

	if (line =~ '^\s*/\*.*')
		return s:FoldComment (a:lnum)
	endif

	if (prev == '')
		let icon = s:FoldGetFunctionIcon (a:lnum)
		let line = substitute (line, '\v<(struct|enum)> *', '', '')
		if (line == '')
			let line = 'anonymous'
		endif
		return icon . ' ' . line
	endif

	let line = s:FoldFunction(a:lnum)

	" if (s:neo_show_prefix == 1)
	" 	if (getline (a:lnum) =~ '^static.*')
	" 		let line = s:function_static . ' ' . line
	" 	else
	" 		let line = s:function_global . ' ' . line
	" 	endif
	" endif

	if (s:neo_show_lines == 1)
		let num = v:foldend - v:foldstart
		let line = line . ' {' . num . '}'
	endif

	return line
endfunction


set foldmethod=expr
set foldexpr=neomutt_fold#FoldLevel(v:lnum)
set foldtext=neomutt_fold#FoldText(v:foldstart)
set foldlevel=4

