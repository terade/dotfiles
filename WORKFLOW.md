# Workflow

cheatsheet for my own workflow

## entr
file: the file that should trigger the change
command: the command you want to be executed when <file> changes
``````
$ echo <file> | entr <command>
``````
## pandoc
``````
$ pandoc -f markdown -t pdf README.md -o README.pdf
``````
Example usage with entr and pandoc:
``````
$ echo README.md | entr pandoc -f markdown -t pdf README.md -o README.pdf
``````
## tmux
Prefix will be used instead of C-b because most people change it
Creates a new session with name <name>
``````
$tmux new -s '<name>'
``````
Example:

new session:
``````
$ tmux new -s ruby
``````
Attaching a session:
``````
$ tmux attach -t '<name>'
$ tmux a -t '<name>'
``````

name being the name of the session
attach to the last created session:
``````
$ tmux a #
``````

list sessions:
``````
$ tmux ls
``````

kill session named <name>:
``````
$ tmux kill-session -t <name>
``````

### Shortcuts
* Prefix + s => show all sessions navigate the sessions with j,k expand with h,l
* Prefix + w => show all windows navigate the windows with j,k expand with h,l
* Prefix + $ => rename the current session
* Prefix + , => rename current window
* Prefix + & => close current window
* Prefix + z => zoom in on pane (use again to unzoom)
* Prefix + : => open tmux prompt
* Prefix + c => create new window
* Prefix + p => switch to previous window
* Prefix + n => switch to next window
* Prefix + <number> => switch to window <number>
* Prefix + d => dettach from session
* Prefix + x => kill pane

### Configuration specific
* Prefix + h => focus left pane
* Prefix + j => focus lower pane
* Prefix + k => focus upper pane
* Prefix + l => focus right pane
* Prefix + H => expand pane left
* Prefix + J => expand pane down
* Prefix + K => expand pane up
* Prefix + L => expand pane right
* Prefix + i => vertical split
* Prefix + u => horizontal split

#### Windows
can be seen in the status bar on the left side

#### The Prompt
To enter the prompt Prefix + :
To exit C-c
: indicates prompt input

enable mouse support to for example resize panes
``````
: set -g mouse on
``````
reload tmux config (here assumed to be located in ~/.tmux.conf)
``````
: source ~/.tmux.conf
``````
kill the tmux server (close all sesssions)
``````
: kill-server
``````
list shortcuts
``````
: list-keys
``````


## Neovim
### Visual mode
c being a character

* fc jump forwards on the next apperance of <character> in line
* tc jump forwards in front of the next apperance of <character> in line
* Fc jump backwards on the next apperance of <character> in line
* Tc jump backwards in front of the next apperance of <character> in line
* ; repeat above motions forwards
* , repeat above motions backwards
