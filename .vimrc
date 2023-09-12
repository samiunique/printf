" Set the file type detection for C language
au BufRead,BufNewFile *.c set filetype=c

" Enable syntax highlighting and indentation for C files
syntax enable
filetype indent plugin on

" Use tabs for indentation and set the tabstop to 4
set tabstop=4
set shiftwidth=4
set noexpandtab
