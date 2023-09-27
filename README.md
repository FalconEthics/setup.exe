# Setup.exe - PC Setup Automation Tool

![GitHub](https://img.shields.io/github/license/falconethics/setup.exe)

**Setup.exe** is a C-based automation tool designed to simplify the process of setting up a new PC. By automating various system updates, app installations, system configurations, and development environment setup, it aims to improve productivity and reduce the mental overhead associated with manually configuring a new machine.

## Table of Contents

- [Introduction](#setupexe---pc-setup-automation-tool)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Disclaimer](#disclaimer)
- [Contributing](#contributing)
- [License](#license)

## Features

- Automated system updates.
- Installation of essential applications and development tools.
- System configuration for an optimized environment.
- Self-help instructions for additional customization.
- [A indept list of what will be installed!](#what-will-be-done)

## Prerequisites

- **Operating System**: Pop!\_OS 22.04 LTS (This tool is specifically designed for this version; use on other Ubuntu versions may not yield expected results).
- A basic understanding of Linux command-line usage.
- A user account with sudo privileges.

## Usage

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/falconethics/setup.exe.git
   cd setup.exe
   ```

2. Open the terminal and navigate to the directory containing `setup.exe`.

3. Run the script with the following command:

   ```shell
   gcc setup.c -o setup
   ./setup
   ```

4. The script will begin by checking for system updates, then proceed to install applications, configure the system, and set up the development environment.

5. Follow the on-screen prompts and provide consent as needed during the setup process.

6. After completing the automated steps, the script will provide self-help instructions for additional customizations and configurations.

## Disclaimer

**Setup.exe** is intended for use on Pop!\_OS 22.04 LTS. Using it on other Ubuntu versions or operating systems may lead to unexpected results and is not recommended.

Before running **Setup.exe**, make sure you have updated Pop!\_Shop and uninstalled any preinstalled apps that you don't need.

## Contributing

Contributions are welcome! If you would like to improve this tool, please fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the [GNU](LICENSE), which means you are free to use, modify, and distribute the code for personal or commercial purposes. See the [License](LICENSE) file for more details.

## What will be done

Here's a simplified list of the apps, tools, and configurations that **Setup.exe** will install, divided into categories:

### System Updates and Setup:

- Check and apply system updates.
- Clean up broken dependencies.
- Clean system cache.
- Repair broken packages.
- Reinstall missing packages.
- Enable the multiverse repository.
- Install Ubuntu restricted extras.
- Install GNOME Tweaks and Shell Extensions.
- Install Microsoft fonts.
- Install FFmpeg.
- Install AnyDesk for remote desktop access.
- Set up faster DNS servers.

### App Installation:

#### Apt (Package Manager) Apps:

- Mozilla Firefox
- Chromium Browser
- VLC Media Player
- GIMP (GNU Image Manipulation Program)
- Kdenlive (Video Editor)
- VirtualBox (for virtualization)

#### Flatpak Apps:

- PDF Arranger
- Motrix (Download Manager)
- Okular (Document Viewer)
- OBS Studio (Open Broadcaster Software)
- Discord
- Slack
- Blender (3D Content Creation Suite)

### Development Environment Setup:

- Install GCC (GNU Compiler Collection).
- Set up Zsh with Oh My Zsh, a powerful and highly customizable shell.
- Install FZF (Fuzzy Finder) for command-line searches.
- Install Ruby and colorls for improved file listing.
- Install Powerlevel10k, a Zsh theme.
- Install Zsh syntax highlighting and autosuggestions plugins.
- Install JetBrains Toolbox (WebStorm, GoLand & CLion).
- Install Git for version control.
- Install Postman, a popular API development tool.
- Install NVM (Node Version Manager) and Node.js (LTS).
- Install Bun, a simple but powerful binary update tool.

### Self-Help Instructions:

- Download and set up the Hack Nerd Font for the terminal.
- Restore the .zshrc file.
- Source the .zshrc file.
- Move the base.yml file for Espanso.
- Install specific extensions from the extension manager.
- Install a printer from system settings.
- Configure RGB and peripheral software.
- Link Google Drive in Nautilus (File Manager).
- Set up a VPN following the provided guide.
- Install Docker for containerization.
- Configure Git for multiple accounts.
- Customize system settings and preferences.
- Set up GNOME Tweaks for additional desktop customization.
- Enable tiling using Pop Shell to enhance window management.

**DevenvSetup**: The Development Environment Setup is particularly significant for increasing productivity. It equips your system with essential tools for software development, including compilers, a powerful shell with extensive plugins, a feature-rich code editor (VSCode), Git for version control, and tools for API testing and Node.js development. This comprehensive development environment ensures that developers can start coding efficiently and effectively, reducing setup time and enabling quicker development cycles.
