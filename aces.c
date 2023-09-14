/*
TODO:
- think poperly about what's left and do a proper code review that this script will work in pop_os
- make a android version of this script
- add proper comments
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
};

const char *SystemSetupCommands[13] = {
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

const char *SelfHelpCommands[11] = {
    "move your base.yml file from backup to ~/.config/espanso/match",
    "install the following extensions from extension manager: appindicator, clipboard, thermals and caffine",
    "install printer from settings",
    "now install rgb and peripherals softwares",
    "link your google drive from nautilis",
    "setup faster dns -> ip4: 1.1.1.1, 1.0.0.1 ip6: 2606:4700:4700::1111, 2606:4700:4700::1001",
    "setup vpn - follow the steps: https://protonvpn.com/support/linux-ubuntu-vpn-setup/",
    "go through the all settings and set them up",
    "setup gnome-twaks",
    "now enable tiling from pop shell! tune the keybinds to make it exactly like a window manager e.g i3wm/sway - check for your last setup",
    "now install a few games if you want!",
};

void executeCommand(const char *cmd);
void loopCommandsExecution(const char *Commands[], int numCommands, char phaseName[]);

int main()
{
    char concent;
    char stepDone;

    printf("\n");
    printf("*************************\n");
    printf("DISCLAIMER!: This script is intended for use on Pop!_OS 22.04 LTS. Please do not use it on any other version of Ubuntu.\n");
    printf("*************************\n");
    printf("\n");
    printf("*************************\n");
    printf("Before you continue, make sure pop-shop is updated and you have uninstalled all preinstalled apps that you use!\n");
    printf("*************************\n");
    printf("\n");

    printf("Do you want to continue? (y/n): ");
    scanf("%c", &concent);

    concent != 'y' ? exit(0) : printf("Starting the script...\n");
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

    for (int i = 0; i < sizeof(SelfHelpCommands) / sizeof(SelfHelpCommands[0]); i++)
    {
        printf("\n");
        printf("*************************\n");
        printf("%s\n", SelfHelpCommands[i]);
        printf("*************************\n");
        printf("\n");

        printf("Done ? (y/n): ");
        scanf(" %c", &stepDone); // Notice the space before %c to consume the newline

        while (stepDone != 'y' && stepDone != 'n')
        {
            printf("Invalid input. Please enter 'y' or 'n': ");
            scanf(" %c", &stepDone); // Keep asking until valid input is provided
        }

        if (stepDone == 'n')
        {
            printf("Skipping to the next step...\n");
        }

        printf("Let's move to the next step!...\n");
    }

    printf("\n");
    printf("*************************\n");
    printf("Your are good to go now!\n");
    printf("*************************\n");
    printf("\n");

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