// OSLab-2
// Group 10
// Shivam Patel - 100839218
// Hetvi Vaghela - 100847993
// Rushi Rathod - 100826456

// Header guard to prevent multiple inclusions
#ifndef MYSHELL_H
#define MYSHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Function prototypes for utility functions in utility.c

/**
 * @brief Change the current working directory to the specified path.
 * 
 * @param path The path to change the current directory to.
 */
void change_directory(char *path);

/**
 * @brief Clear the screen.
 */
void clr();

/**
 * @brief List the contents of the specified directory.
 * 
 * @param path The path of the directory to list.
 */
void list_directory(char *path);

/**
 * @brief Display the environment variables.
 */
void display_environment();

/**
 * @brief Display the specified comment.
 * 
 * @param comment The comment to be displayed.
 */
void display_comment(char *comment);

/**
 * @brief Display help information about supported commands.
 */
void display_help();

/**
 * @brief Pause the shell until the user presses Enter.
 */
void pause_shell();

#endif

