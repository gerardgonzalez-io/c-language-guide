/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 6, 2025, 10:03 AM
 */


#include <xc.h>
#include <stdio.h>

char myChar = '*';
int asciiValue = 0;
char nextChar = '\0';

//char nextChar = ''; -> This line lead to ERROR

/*
   Explanation: 
   -------------
   In C, a character literal must be a single character enclosed in single quotes. 
   For example:
       'A'    -> valid character
       '\0'   -> valid (the null character)
       ' '    -> valid (a space)
   However, ''  (two single quotes with nothing in between) is not valid and will cause a compilation error.

   Hence, instead of writing:
       char nextChar = '';
   you should initialize 'nextChar' with a valid character, such as '\0', 'A', or ' '.
*/

void main(void) 
{
    
    asciiValue = (int)myChar;
    nextChar = (char)(asciiValue + 1);
    
    printf("\nYou entered:          %c\n", myChar);
    printf("Its ASCII code is:    %d\n", asciiValue);
    printf("Next character is:    %c\n", nextChar);

    return;
}


