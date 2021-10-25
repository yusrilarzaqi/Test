call plug#begin("~/.vim/plugged")
" Plug 'nathanaelkane/vim-indent-guides'
" Plug 'vim-jp/vim-cpp'
Plug 'flazz/vim-colorschemes'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'tpope/vim-sensible'
Plug 'sheerun/vim-polyglot'
Plug 'tpope/vim-fugitive'
Plug 'airblade/vim-gitgutter'
Plug 'mattn/emmet-vim'
Plug 'pangloss/vim-javascript'
" Plug 'sonph/onehalf', { 'rtp': 'vim' }
" Plug 'ghifarit53/tokyonight-vim'
Plug 'dracula/vim', {'as':'dracula'}
" 



call plug#end()

set termguicolors

set t_Co=256
" let g:tokyonight_style = 'strom'
" let g:tokyonight_enable_italic = 1
" let g:tokyonight_transparent_background = 1
" let g:tokyonight_menu_selection_background = 'blue'
" let g:tokyonight_cursor = 'green'
" let g:lightline = {'colorscheme' : 'tokyonight'}


" colorscheme tokyonight


colors deep-space

set mouse=a
set number
set relativenumber
set ruler
syntax enable
set title
set encoding=utf-8
" set cursorline
set autoindent
set hidden
set smartindent
set nowrap
set noswapfile

set expandtab
set tabstop=2
set softtabstop=2
set shiftwidth=2

set smarttab
set scrolloff=7
set showtabline=2 " 2
set cmdheight=2


" ============================================================================
" AIRLINE CONFIGURATION
" " ============================================================================
" set airline theme
" let g:airline_theme = 'wombat'
" let g:airline_theme = 'onehalfdark'
let g:airline_theme = 'onedark'
" let g:airline_theme = 'tokyonight'
" llet g:airline_theme = 'base16'
" let g:airline_theme = 'base16_adwaita'
" displays all buffers when there's only one tab open
let g:airline#extensions#tabline#enabled = 1
" separators can be configured independently for the tablne
let g:airline#extensions#tabline#left_sep = ' '
let g:airline#extensions#tabline#left_alt_sep = '|'
let g:airline#extensions#tabline#left_alt_sep = '<'

" populate the g:airline_symbols dictionary with the powerline symbols
let g:airline_powerline_fonts = 1

nnoremap <C-Left> :tabprevious<CR>
nnoremap <C-Right> :tabnext<CR>
nnoremap <C-j> :tabprevious<CR>
nnoremap <C-k> :tabnext<CR>


" disable beep on errors.
set noerrorbells

" [DISABLED] flash the screen instead of beeping on errors.
set novisualbell
set termguicolors
" Set internal encoding of vim, not needed on neovim, since coc.nvim using some

" Some servers have issues with backup files, see #649.
set nobackup
set nowritebackup

" Having longer updatetime (default is 4000 ms = 4 s) leads to noticeable
" delays and poor user experience.
set updatetime=300

" Don't pass messages to |ins-completion-menu|.
" set shortmess+=c

if has('gui_running')
   set guioptions-=T  " no toolbar
   colorscheme elflord
   set lines=60 columns=108 linespace=0
   if has('gui_win32')
      set guifont=DejaVu_Sans_Mono:h10:cANSI
   else
      set guifont=DejaVu\ Sans\ Mono\ 10
   endif
endif

if exists('+termguicolors')
  let &t_8f = "\<Esc>[38;2;%lu;%lu;%lum"
  let &t_8b = "\<Esc>[48;2;%lu;%lu;%lum"
  set termguicolors
endif
    
