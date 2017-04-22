syntax region doxygen matchgroup=wd start=/\/\*\*< / end=/ \*\// keepend concealends
" syntax region hide_comment matchgroup=wd start=/\s*\/\*\ / end=/ \*\// keepend concealends
" syntax region hide_comment matchgroup=wd start=/\/\*\ / end=/ \*\// keepend concealends

highlight doxygen guifg=#009000 guibg=NONE
" highlight hide_comment guifg=#009000 guibg=NONE

