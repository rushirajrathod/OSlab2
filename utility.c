// OSLab-2
// Group 10
// Shivam Patel - 100839218
// Hetvi Vaghela - 100847993
// Rushi Rathod - 100826456

#include "myshell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Function to change the current working directory
void change_directory(char *path) {
    // Check if no path is provided
    if (path == NULL) {
        char cwd[1024];
        // Get the current working directory
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            // Print the current working directory
            printf("Current Directory: %s\n", cwd);
        } else {
            perror("getcwd() error");
        }
    } else {
        // Change directory to the specified path
        if (chdir(path) != 0) {
            // Print error if unable to change directory
            perror("myshell");
        }
    }
}

// Function to clear the screen
void clr() {
    printf("\033[H\033[J"); // ANSI escape sequence to clear the screen
}

// Function to list the contents of a directory
void list_directory(char *path) {
    // Check if no path is provided, set path to the current directory
    if (path == NULL) {
        path = ".";
    }

    // Create a command to list directory contents
    char command[1024];
    sprintf(command, "ls -l %s", path);
    // Execute the command using a system call
    system(command);
}

// Function to display environment variables
void display_environment() {
     // Access the external environment variable
    extern char **environ;
    // Iterate through the environment variables and print each one
    for (char **env = environ; *env != NULL; env++) {
        printf("%s\n", *env);
    }
}

// Function to display a comment on the display
void display_comment(char *comment) {
    printf("%s\n", comment);
}

// Function to display help information
void display_help() {
    // You can replace this with the actual help content
    printf("Help: This is a simple shell. Available commands: cd, clr, dir, environ, echo, help, pause, quit\n");
}

// Function to pause the operation of the shell until 'Enter' is pressed
void pause_shell() {
    printf("Press Enter to continue...\n");
    getchar(); // Wait for Enter key
}

