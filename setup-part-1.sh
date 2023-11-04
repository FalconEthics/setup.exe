#!/bin/bash

#lets start with some basic setup
sudo apt update
sudo apt upgrade -y
sudo apt-get update
sudo apt-get upgrade -y

#installing some basic apps
sudo apt-get install firefox vlc gimp kdenlive gthumb calibre virtualbox -y
sudo apt-get install virtualbox-ext-pack -y
flatpak install com.github.jeromerobert.pdfarranger net.agalwood.Motrix org.kde.okular com.obsproject.Studio com.discordapp.Discord com.slack.Slack org.blender.Blender -y
sudo wget -qO - https://keys.anydesk.com/repos/DEB-GPG-KEY | apt-key add -
echo 'deb http://deb.anydesk.com/ all main' > /etc/apt/sources.list.d/anydesk-stable.list
sudo apt update
sudo apt install anydesk -y

#installing some system tools
sudo add-apt-repository multiverse
sudo apt-get update
sudo apt install ubuntu-restricted-extras -y
sudo apt-get install gnome-shell-extension-manager -y
sudo apt update && sudo apt install ttf-mscorefonts-installer -y
sudo fc-cache -f -v
sudo apt-get install ffmpeg
wget https://github.com/federico-terzi/espanso/releases/download/v2.1.8/espanso-debian-x11-amd64.deb
sudo apt install ./espanso-debian-x11-amd64.deb
espanso service register
espanso start
sudo apt install gnome-tweaks -y

#installing some dev tools
sudo apt-get install gcc g++ -y
sudo apt-get install zsh -y
sudo apt-get install git -y
echo 'reboot pc then run > zsh and then > chsh -s zsh to change default shell to zsh now restart again and run > sh setup-part-2.sh'