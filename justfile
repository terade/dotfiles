
set shell := ["fish", "-c"]

get_changes:
    cp ~/.xmonad/xmonad.hs xmonad
    cp -r ~/.config/nvim/lua nvim/
    cp -r ~/.config/nvim/after nvim/
    cp -r ~/.config/nvim/init.lua nvim/
    cp -r ~/.config/tmux/tmux.conf .
    cp ~/justfile ./home/justfile
    cp -r ~/justdir/* ./home/justdir

edit:
    vim justfile
