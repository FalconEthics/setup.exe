/*
TODO:
- add proper comments
- add timeouts whereever necessary
- take a final yes or no before starting the script
- finish the devenvsetup commands list
- think poperly about what's left and do a proper code review that this script will work in pop_os
- make a android version of this script:
first check for system updates/upgrades -> settings
Go through all the basic settings
playstore apps updates
developer option on -> settings > about > click on build version till it shows developer option enabled
find and reduce all animations to 0.5x
set clipboard manager
set your wallpapers
set global font to comforta
now let's start installing some apps!
install writing star
install gramarly
link your google drive
install ms office
install rar
install firefox
install Notion
install codesnackide
install sketchbook
install protonvpn
install snapsheed
install goodreads
install acrobat
install adm
insatll bittorrent
install vlc
install coc
install steam
install whatsapp
install slack
install discord
install github
install zoom
install teamviewer
install spotify mod
install kde connect
install trello
install home workout. splits training and mma home
install zomato
install dafit
install digilocker
install life360
install YT Studio
insatll isic
install camscanner
install policybazar
install whereismytrain
install ntes
install irctc rail connect
install makemytrip
install dr wolf
install shadow fight 2
install among us
install inshare
install airtel and jio app
install google auth
insatll whatisremoved
insatll galgaxywear
install google keep and calender
insatll teamviewer
insatll snaptube
insatll yt studio
insatll truecaller
insatll indeed
insatll linkedIn
insatll hirect
insatll coursera, udemy, wikipedia, quora, reddit, translate
insatll facebook, instagram, twitter
insatll gpay, hdfc bank, khatabook, paytm, paypal, phone pe
insatll flipkart, 91mobiles, lenskart, olx, indanoil, amazon
install netflix, prime video, bookmyshow, twitch, hotstar, sonyliv, zee5, jiotv, mxplayer
set dock apps to -> phone, contacts, security, messages and settings
turn off notifications for unwanted apps
turn off app drawer
add google serach widget to the top of all the home pages
set clock with weather widget at home screen
set important quick dial on 2nd page
set dual clock ist & gmt -> lockscreen
set emergency alert button/dial
now let's start making home screen look organised with folders and important apps
lifestyle -> calender, trello, home workout, splits training, mma at home, zomato, dafit, goodreads, notion.
add camera to home screen
important -> drive, gmail, digilocker, life360, isic, camscanner, plicybazar, notes, authenticator
travel -> maps, uber, whereismytrain, ntes, irctc rail connect, makemytrip
gamelauncher -> coc, dr wolf, shadow fight 2, among us
add brave to home screen
entertainment -> netflix, prime video, youtube, bookmyshow, twitch, hotstar, sonyliv, zee5, jiotv, mxplayer
add gallary to home screen
tools -> writing star, files, recorder, screen recorder, scanner, remote, inshare, adm, meet, airtel, bittorrent, kde connect, myjio, whatisremoved, galgaxywear, teamviewer, snaptube, yt studio, zoom, snapdheed, proton vpn, steam, truecaller, vlc, rar, gramarly, sketchbook.
job hunt -> indeed, linkedIn, hirect
shopping -> flipkart, 91mobiles, lenskart, olx, indanoil, amazon
social media -> whatsapp, facebook, instagram, twitter, slack, discord
education -> calculator, coursera, udemy, wikipedia, quora, reddit, codesnackide, github, translate
finance -> gpay, hdfc bank, khatabook, paytm, paypal, phone pe
add playstore to home screen
now make a folder named others and add all the left ones in it then place it in the second page.
activate all applications -> turn on each and every installed application and set all the user settings/plugins
restart and go though all the system settings again
look for any updated tweaks
*/

#include <stdio.h>
#include <stdlib.h>

const char *InitialUpdateCheckCommands[10] = {
    "echo Checking for system updates...",
    // checking for updates
    "sudo apt update && apt-get update",
    "sudo apt upgrade && apt-get upgrade",
    // checking for broken dependencies
    "sudo apt autoremove && apt-get autoremove",
    "sudo apt autoclean && apt-get autoclean",
    "sudo apt clean && apt-get clean",
    "sudo apt install -f && apt-get install -f",
    "sudo apt install --fix-missing && apt-get install --fix-missing",
    "sudo apt install --fix-broken && apt-get install --fix-broken",
    "sudo apt install --reinstall && apt-get install --reinstall",
};

const char *AppInstallCommands[20] = {
    "echo Installing apps...",
    // installing apt apps
    "sudo apt-get install firefox -y",
    "sudo apt install -y chromium-browser -y",
    "sudo apt-get install libreoffice -y",
    "sudo apt-get install vlc -y",
    "sudo apt-get install gimp -y",
    "sudo apt-get install kdenlive -y",
    // for installing vmbox
    "sudo apt-get install virtualbox -y",
    "sudo apt-get install virtualbox—ext–pack -y",
    // intalling flatpak apps
    "flatpak install flathub net.agalwood.Motrix",
    "flatpak install flathub org.kde.okular",
    "flatpak install flathub com.obsproject.Studio",
    "flatpak install flathub com.discordapp.Discord",
    "flatpak install flathub com.slack.Slack",
    "flatpak install flathub org.blender.Blender",
    // for installing anydesk
    "wget -qO - https://keys.anydesk.com/repos/DEB-GPG-KEY | apt-key add -",
    "echo 'deb http://deb.anydesk.com/ all main' > /etc/apt/sources.list.d/anydesk-stable.list",
    "apt update",
    "sudo apt install anydesk",
    // for installing protonvpn
    "sudo apt-get install protonvpn",
};

const char *SystemSetupCommands[8] = {
    "echo Setting up system...",
    "sudo add-apt-repository multiverse",
    "sudo apt update",
    "sudo apt install ubuntu-restricted-extras",
    "sudo apt install gnome-tweaks",
    "sudo apt install gnome-shell-extensions",
    "sudo apt update && sudo apt install ttf-mscorefonts-installer",
    "sudo fc-cache -f -v",
    "sudo apt-get install ffmpeg",
    // to install espanso
    "wget https://github.com/federico-terzi/espanso/releases/download/v2.1.8/espanso-debian-x11-amd64.deb",
    "sudo apt install ./espanso-debian-x11-amd64.deb",
    "espanso service register",
    "espanso start",
};

const char *DevEnvSetupCommands[] = {
    "echo Setting up dev environment...",
    // install zsh, p10k, fzf, zsh-autocomplete and a good teminal with multipane functionality
    // install git and setup personal and work account with ssh
    // install docker ~ https://docs.docker.com/desktop/install/
    // install nodejs, npm and pnpm with nvm
    // install postman
    // install github desktop and lazygit
    // install vscode with nvim > 0.8
    // Setup RN dev env
};

const char *SelfHelpCommands[] = {
    "echo Now do some self help...",
    "echo move your base.yml file from backup to ~/.config/espanso/match",
    "echo install the following extensions from extension manager: appindicator, clipboard, thermals and caffine",
    "echo install printer from settings",
    "install rgb and peripherals softwares",
    "link your google drive from nautilis",
    "setup faster dns -> ip4: 1.1.1.1, 1.0.0.1 ip6: 2606:4700:4700::1111, 2606:4700:4700::1001",
    "setup vpn",
    "go through the all settings and set them up",
    "setup gnome-twaks",
    "now enable tiling from pop shell! tune the keybinds to make it exactly like a window manager e.g i3wm/sway - check for your last setup",
    "now install a few games if you want!",
};

void executeCommand(const char *cmd);
void loopCommandsExecution(const char *Commands[], int numCommands, char phaseName[]);

int main()
{

    printf("\n");
    printf("*************************\n");
    printf("DISCLAIMER!: This script is intended for use on Pop!_OS 22.04 LTS. Please do not use it on any other version of Ubuntu.\n");
    printf("*************************\n");
    printf("\n");
    printf("*************************\n");
    printf("Before you continue, make sure pop-shop is updated and you have uninstalled all preinstalled apps that you use!\n");
    printf("*************************\n");
    printf("\n");

    // initial update check
    int numCommands = sizeof(InitialUpdateCheckCommands) / sizeof(InitialUpdateCheckCommands[0]);
    loopCommandsExecution(InitialUpdateCheckCommands, numCommands, "Initial Update Check");

    // app installation
    int numAppInstallCommands = sizeof(AppInstallCommands) / sizeof(AppInstallCommands[0]);
    loopCommandsExecution(AppInstallCommands, numAppInstallCommands, "App Installation");

    // system setup
    int numSystemSetupCommands = sizeof(SystemSetupCommands) / sizeof(SystemSetupCommands[0]);
    loopCommandsExecution(SystemSetupCommands, numSystemSetupCommands, "System Setup");

    return 0;
}

void executeCommand(const char *cmd)
{
    int result = system(cmd);

    if (result == 0)
    {
        printf("\n");
        printf("*************************\n");
        printf("Command executed successfully.\n");
        printf("*************************\n");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("*************************\n");
        printf("Command failed to execute.\n");
        printf("*************************\n");
        printf("\n");
    }
}

void loopCommandsExecution(const char *Commands[], int numCommands, char phaseName[])
{
    for (int i = 0; i < numCommands; i++)
    {
        const char *cmd = Commands[i];
        executeCommand(cmd);
    }
    printf("\n");
    printf("*************************\n");
    printf("%s : Phase Complete\n", phaseName);
    printf("*************************\n");
    printf("\n");
}