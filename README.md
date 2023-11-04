# Setup.exe - Personal Dev Environment Setup Automation Script

![GitHub](https://img.shields.io/github/license/falconethics/setup.exe)

**Setup.exe** is automation script designed to simplify the process of setting up personal dev environment. By automating various system updates, app installations, system configurations, and development environment setup, it aims to improve productivity and reduce the mental overhead associated with manually configuring a new machine.

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
   sudo chmod 777 ./setup.sh
   sudo chmod 777 ./setup-part-1.sh
   sudo chmod 777 ./setup-part-2.sh
   sh ./setup.sh
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
