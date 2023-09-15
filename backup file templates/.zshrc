# Set the PATH environment variable
export PATH=$HOME/bin:/usr/local/bin:$PATH

# Load the Powerlevel10k instant prompt if it exists
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

# Set the path to the oh-my-zsh installation directory
export ZSH="$HOME/.oh-my-zsh"

# Set the Powerlevel10k theme
ZSH_THEME="powerlevel10k/powerlevel10k"

# Set the list of plugins to load
plugins=(git zsh-autosuggestions zsh-syntax-highlighting)

# Load oh-my-zsh
source $ZSH/oh-my-zsh.sh

# Set aliases
alias ls='colorls'
alias lsa='colorls -lA --sd'

# Load the Powerlevel10k configuration file if it exists
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh

# Load fzf if it exists
[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh

# Set the path to the NVM installation directory and load it
export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"  # This loads nvm
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"  # This loads nvm bash_completion

# Set the path to the Android SDK installation directory
export ANDROID_HOME=$HOME/Android/Sdk

# Add the emulator and platform-tools directories to the PATH
export PATH=$PATH:$ANDROID_HOME/emulator
export PATH=$PATH:$ANDROID_HOME/platform-tools

# Set the path to the PNPM installation directory
export PNPM_HOME="/home/USERNAME/.local/share/pnpm" # Change USERNAME to your username

# Add the PNPM directory to the PATH if it's not already there
case ":$PATH:" in
  *":$PNPM_HOME:"*) ;;
  *) export PATH="$PNPM_HOME:$PATH" ;;
esac

# Load bun completions if they exist
[ -s "/home/USERNAME/.bun/_bun" ] && source "/home/USERNAME/.bun/_bun" # Change USERNAME to your username

# Set the path to the bun installation directory and add it to the PATH
export BUN_INSTALL="$HOME/.bun"
export PATH="$BUN_INSTALL/bin:$PATH"