// This program is a simple setup program that i use to setup my coding environment on different OS

import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;

// It reads a text file and prints the steps to setup the environment
class Setup {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);

        //select OS
        System.out.println(
                "\n Enter your OS family: \n \t \t \t 1. Linux \n \t \t \t 2. Unix \n \t \t \t 3. Windows \n \t \t \t 4. MacOS \n \t \t \t 5. Others");
        String OS = myObj.nextLine();

        //start setup with selected OS
        if (OS.equalsIgnoreCase("Linux")) {

            //if OS is Linux
            System.out.println("Welcome to Linux Programming Environment Setup!");
            //passing linux.txt to start method
            start("linux.txt");

        } else if (OS.equalsIgnoreCase("unix") || OS.equalsIgnoreCase("MacOS")) {

            //if OS is Unix or MacOS
            System.out.println("Welcome to Unix Programming Environment Setup!");
            //passing unix.txt to start method
            start("unix.txt");

        } else {

            //if OS is not supported
            System.out.println("OS not supported!");
        }

    }

    //start method
    public static void start(String option) {

        String fileName = option; // Change this to the name of your file
        ArrayList<String> linuxItems = new ArrayList<>();

        //reading file
        try (
                BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            //reading line by line
            while ((line = br.readLine()) != null) {
                linuxItems.add(line);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

        Scanner myObj = new Scanner(System.in);
        int index = 0;

        //looping through the list
        for (index = 0; index < linuxItems.size(); index++) {

            //printing the list
            System.out.println("\n" + linuxItems.get(index));
            //asking user to complete the step
            System.out.println("\nDone? (y/n)");
            String answer = myObj.nextLine();

            if (answer.equalsIgnoreCase("n")) {
                //if user is not done with the step
                System.out.println("\nPlease complete the following step first!");
                //decrementing index to print the same step again
                index--;
            }
        }
        //printing message when all steps are completed
        System.out.println("\nCongrats your coding environment is ready!");
    }
}

// Edit the txt file to add more steps