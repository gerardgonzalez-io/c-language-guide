/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 7, 2025, 5:52 PM
 */


#include <xc.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int countChar(const char *str, char c) 
{
    int count = 0;
    int i = 0;
    
    while (str[i] != '\0') 
    {
        if (str[i] == c) 
        {
            count++;
        }
        i++;
    }
    
    return count;
}

void main(void) 
{
    char input[MAX_LEN + 1] = "This is a hardcoded example string.";
    char toFind = 'c';
    
    
    /*
     * The curly braces {} in the block:
     * 
     * are used to create a scope. In C, 
     * you can use braces to define a block 
     * of code that introduces its own scope, 
     * even if it's not part of a control structure 
     * like if, while, or for.
     */

    /* Count occurrences */
    {
        int occurrences = countChar(input, toFind);
        printf("Character '%c' occurs %d time(s) in the string.\n", toFind, occurrences);
    }
    
    
    /*
     * Purpose of This Scope:
     * 
     * 1. Variable Scope Limitation.
     * 2. Logical Grouping.
     * 
     * 
     * 
     * Why Use This Here?
     * 
     * Not Necessary for Functionality: 
     * 
     * The braces in this case are not strictly necessary. 
     * The code could function correctly without them because 
     * it is already inside the main() function, and no variable 
     * conflict would occur. However, using a scope block can improve 
     * code organization and readability, especially in larger programs.
     * 
     * 
     * Style or Preference: 
     * 
     * Some programmers use additional scopes 
     * as a stylistic choice to make the program's 
     * structure clearer, especially for modular 
     * or logically grouped operations.
     * 
     */
    
    return;
}
