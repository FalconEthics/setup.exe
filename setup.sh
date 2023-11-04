#!/bin/bash

# Check if the OS is Pop!_OS
if [ -f /etc/os-release ] && grep -q "Pop" /etc/os-release; then
    # Ask the user for confirmation
    read -p "This script is intended for Pop!_OS. Are you sure you want to continue? (y/yes to proceed): " confirm
    if [[ "$confirm" == "y" || "$confirm" == "yes" ]]; then
        # Execute the setup script
        ./setup-part-1.sh
    else
        echo "Script execution canceled."
    fi
else
    echo "This script can only run on Pop!_OS."
fi
