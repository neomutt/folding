" Copyright 2001-2017 Richard Russon.

let s:function_global   = '●'
let s:function_static   = '○'

let s:neo_show_prefix = 1
let s:neo_show_args   = 0
let s:neo_show_return = 0
let s:neo_show_lines  = 1

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
		let level = '>2'

	elseif (line =~ '^\s*/\*.*$') " /*
		let level = 'a1'

	elseif (line =~ '/\*\( .*\)\?$')
		let level = 'a1'
	elseif (line =~ '/\*\s')
		let level = 'a1'

	elseif ((prev == "") && (line =~ '^\S.*(.*') && ((next == '{') || (nex2 == '{') || (nex3 == '{') || (nex4 == '{') || (nex5 == '{') || (nex6 == '{') || (nex7 == '{') || (nex8 == '{')))
		let level = '>1'
	elseif ((prev[0] == '}') && (line == ''))
	 	let level = '<1'
	else
		let level = '='

	elseif ((prev =~ '^ \*/') && (a:lnum < 20) && (getline(1) =~? '^/\* Copyright.*'))
		let level = '<1'

	elseif (line =~ '\*/')
		let level = 's1'

	endif

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

	return func
endfunction

function! neomutt_fold#FoldText (lnum)
	let line = s:FoldFunction(a:lnum)

	if (s:neo_show_prefix == 1)
		if (getline (a:lnum) =~ '^static.*')
			let line = s:function_static . ' ' . line
		else
			let line = s:function_global . ' ' . line
		endif
	endif

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

