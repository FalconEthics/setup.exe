// importing defaults
#include <stdio.h>
#include <stdlib.h>

// initial update check commands
const char *InitialUpdateCheckCommands[20] = {
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

// app installation commands
const char *AppInstallCommands[30] = {
    "echo Installing apps...",
    // installing apt apps
    "sudo apt-get install firefox -y",
    "sudo apt install -y chromium-browser -y",
    "sudo apt-get install vlc -y",
    "sudo apt-get install gimp -y",
    "sudo apt-get install kdenlive -y",
    "sudo apt-get install gthumb -y",
    // for installing vmbox
    "sudo apt-get install virtualbox -y",
    "sudo apt-get install virtualbox—ext–pack -y",
    // intalling flatpak apps
    "flatpak install flathub com.github.jeromerobert.pdfarranger",
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
};

// system setup commands
const char *SystemSetupCommands[20] = {
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

// dev env setup commands
const char *DevEnvSetupCommands[35] = {
    "echo Setting up dev environment...",
    "sudo apt-get install gcc -y"
    // installing zsh with all the plugins
    "sudo apt-get install zsh -y",
    "sudo chsh -s zsh",
    "zsh",
    "sh -c '$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)'",
    "git clone --depth 1 https://github.com/junegunn/fzf.git ~/.fzf",
    "~/.fzf/install",
    "sudo apt-get install ruby ruby-dev -y"
    "sudo gem install colorls",
    "git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k",
    "git clone https://github.com/zsh-users/zsh-syntax-highlighting.git ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-syntax-highlighting",
    "git clone https://github.com/zsh-users/zsh-autosuggestions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions",
    // installing git and other stuff
    "sudo apt-get install git -y",
    "sudo apt-get install libboost-all-dev -y",
    "flatpak install flathub io.github.shiftey.Desktop",
    "flatpak install flathub com.getpostman.Postman",
    "curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.5/install.sh | zsh",
    "nvm install --lts",
    "curl -fsSL https://bun.sh/install | bash",
};

// self help commands
const char *SelfHelpCommands[30] = {
    "download Jetbrains toolbox: https://www.jetbrains.com/toolbox-app/",
    "run theis in cmd: sudo tar -xzf jetbrains-toolbox-1.17.7391.tar.gz -C /opt",
    "sign-in and install all the ide you need from toolbox",
    "download hack-nerd font and setup it in terminal: https://github.com/ryanoasis/nerd-fonts/releases/download/v3.0.2/Hack.zip",
    "move your .zshrc file from backup to home directory",
    "now - source ~/.zshrc",
    "move your base.yml file from backup to ~/.config/espanso/match",
    "install the following extensions from extension manager: clipboard indicator, vitals, blur my shell and caffine - (place vitals to the left and enable application blur in blur my shell with all the apps that you want to not blur in blacklist, add Shift+Super+V as toggle shortcut for clipboard)",
    "install printer from settings",
    "now install rgb and peripherals softwares if you have any",
    "link your google drive from nautilis",
    "setup faster dns -> ip4: 1.1.1.1, 1.0.0.1 ip6: 2606:4700:4700::1111, 2606:4700:4700::1001 - (from gnome setting's network section)",
    "setup vpn - follow the steps: https://protonvpn.com/support/linux-ubuntu-vpn-setup/",
    "install docker from: https://docs.docker.com/desktop/install/ubuntu/",
    "setup your git config for multiple accounts: https://www.freecodecamp.org/news/manage-multiple-github-accounts-the-ssh-way-2dadc30ccaca/",
    "go through the all settings (each and every) and set them up according to your prefference",
    "now copy Sunity-Cursors to /usr/share/icons",
    "go to gnome-tweaks and change the folloing settings: cursor to Sunity-cursors, backgroud to your desired wallpaper, Mouse Acceleration Profile - Flat, startup application to none, top bar weekday, date enabled, window titlebar - double-click to toggle maximize and others to none, minimize enablex and maximize none",
    "now enable tiling from pop shell! tune the keybinds to make it exactly like a window manager e.g i3wm/sway - check keybinds from your last setup",
    "Now go through all the apps and set them up according to your prefference",
};

// function declarations
void executeCommand(const char *cmd);
void loopCommandsExecution(const char *Commands[], int numCommands, char phaseName[]);

int main()
{
    // to get concent from user before starting the script
    char concent;
    // to get concent from user before moving to next step
    char stepDone;

    printf("\n");
    printf("*************************\n");
    printf("DISCLAIMER!: This script is intended for use on Pop!_OS 22.04 LTS. Please do not use it on any other version of Ubuntu.\n");
    printf("*************************\n");
    printf("Before you continue, make sure pop-shop is updated and you have uninstalled all preinstalled apps that you don't use!\n");
    printf("*************************\n");
    printf("\n");

    // asking for concent
    printf("Do you want to continue? (y/n): ");
    scanf("%c", &concent);

    // only continue if concent is 'y'
    concent != 'y' ? exit(0) : printf("Starting the script...\n");

    // executing commands in a loop fuction sequentially

    // initial update check
    int numCommands = sizeof(InitialUpdateCheckCommands) / sizeof(InitialUpdateCheckCommands[0]);
    loopCommandsExecution(InitialUpdateCheckCommands, numCommands, "Initial Update Check");

    // app installation
    int numAppInstallCommands = sizeof(AppInstallCommands) / sizeof(AppInstallCommands[0]);
    loopCommandsExecution(AppInstallCommands, numAppInstallCommands, "App Installation");

    // system setup
    int numSystemSetupCommands = sizeof(SystemSetupCommands) / sizeof(SystemSetupCommands[0]);
    loopCommandsExecution(SystemSetupCommands, numSystemSetupCommands, "System Setup");

    // dev env setup
    int numDevEnvSetupCommands = sizeof(DevEnvSetupCommands) / sizeof(DevEnvSetupCommands[0]);
    loopCommandsExecution(DevEnvSetupCommands, numDevEnvSetupCommands, "Dev Env Setup");

    // Self-help
    printf("\n");
    printf("*************************\n");
    printf("Now do some self-help...\n");
    printf("*************************\n");
    printf("\n");

    // self help commands
    for (int i = 0; i < sizeof(SelfHelpCommands) / sizeof(SelfHelpCommands[0]); i++)
    {
        printf("\n");
        printf("*************************\n");
        printf("%s\n", SelfHelpCommands[i]);
        printf("*************************\n");
        printf("\n");

        // asking if the step is done
        printf("Done ? (y/n): ");
        scanf(" %c", &stepDone); // Notice the space before %c to consume the newline

        // continue only if step is done
        while (stepDone != 'y' && stepDone != 'n')
        {
            printf("Invalid input. Please enter 'y' or 'n': ");
            scanf(" %c", &stepDone); // Keep asking until valid input is provided
        }

        // if step is not done, skip to the next step
        if (stepDone == 'n')
        {
            printf("Skipping to the next step...\n");
        }

        // if step is done, move to the next step
        printf("Let's move to the next step!...\n");
    }

    printf("\n");
    printf("*************************\n");
    printf("Your are good to go now!\n");
    printf("*************************\n");
    printf("\n");

    // exiting the script successfully
    return 0;
}

// function definitions

// function to execute a command
void executeCommand(const char *cmd)
{
    // using system() to execute the command in the shell
    int result = system(cmd);

    // checking if the command executed successfully
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

// function to execute commands in a loop
void loopCommandsExecution(const char *Commands[], int numCommands, char phaseName[])
{
    // loop to execute commands sequentially
    for (int i = 0; i < numCommands; i++)
    {
        const char *cmd = Commands[i];
        executeCommand(cmd);
    }
    // printing phase complete message
    printf("\n");
    printf("*************************\n");
    printf("%s : Phase Complete\n", phaseName);
    printf("*************************\n");
    printf("\n");
}

// copyright @ 2021 - 2022 SOUMIK DAS