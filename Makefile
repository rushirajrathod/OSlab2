# Makefile 
# Group 10
# Shivam Patel - 100839218
# Hetvi Vaghela - 100847993
# Rushi Rathod - 100826456

# Target: myshell
all: myshell

# Compile myshell executable using myshell.c and utility.c
myshell: myshell.c utility.c
	gcc -o myshell myshell.c utility.c -I.

