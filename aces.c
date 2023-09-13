#include <stdio.h>
#include <stdlib.h>

int main()
{

    const char *InitialUpdateCheckCommands[] = {
        "echo Checking for system updates...",
        "sudo apt upgrade && apt-get upgrade",
        "sudo apt autoremove && apt-get autoremove",
        "sudo apt autoclean && apt-get autoclean",
        "sudo apt clean && apt-get clean",
        "sudo apt install -f && apt-get install -f",
        "sudo apt install --fix-missing && apt-get install --fix-missing",
        "sudo apt install --fix-broken && apt-get install --fix-broken",
        "sudo apt install --reinstall && apt-get install --reinstall",
    };

    for (int i = 0; i < sizeof(InitialUpdateCheckCommands) / sizeof(InitialUpdateCheckCommands[0]); i++)
    {
        const char *cmd = InitialUpdateCheckCommands[i];
        printf("Executing command: %s\n", cmd);

        int result = system(cmd);

        if (result == 0)
        {
            printf("Command executed successfully.\n");
        }
        else
        {
            printf("Command failed to execute.\n");
        }
    }

    return 0;
}