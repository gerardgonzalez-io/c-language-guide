/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 14, 2025, 4:09 PM
 */


#include <xc.h>
#include <stdio.h>
#include <string.h>

#include <ctype.h>
/*  About <ctype.h>
 * 
 *  The <ctype.h> library provides functions for 
 *  character classification and conversion. 
 *  These functions work on int values representing characters 
 *  (typically char values in ASCII).
 * 
 * 
 * Common Functions in <ctype.h>:
 * 
 * 1. Character Classification:
 * 
 * isspace(c): Checks if c is a white space character (space, tab, newline, etc.).
 * isalpha(c): Checks if c is an alphabetic character (a-z, A-Z).
 * isdigit(c): Checks if c is a numeric digit (0-9).
 * isalnum(c): Checks if c is alphanumeric (a-z, A-Z, 0-9).
 * islower(c): Checks if c is a lowercase letter (a-z).
 * isupper(c): Checks if c is an uppercase letter (A-Z).
 * ispunct(c): Checks if c is a punctuation character.
 * 
 * 2. Character Conversion:
 * 
 * tolower(c): Converts c to lowercase if it is uppercase.
 * toupper(c): Converts c to uppercase if it is lowercase.
 * 
 */

// Function to remove white spaces from a string
void removeSpaces(char str[]) 
{
    int i = 0, j = 0;
    while (str[i] != '\0') 
    {
        if (!isspace(str[i])) 
        {
            str[j++] = str[i];
            /* j++ is a post-increment operator. It means:
             * 
             * Use the current value of j for the assignment: str[j] = str[i].
             * 
             * After the assignment, increment j by 1 to point to the next position in the string.
            */
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the cleaned string
}

// return 1 if str is palindrome, 0 otherwise
int isPalindrome(const char str[]) 
{
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    
    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0; //not a palindrome
        }
        start++;
        end--;
    }
    return 1;
}

void main(void) 
{
    char str[] = "anita lava la tina";
    
    removeSpaces(str);
    
    if (isPalindrome(str))
    {
        printf("\"%s\" is a palindrome.\n", str);
    }
    else 
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return;
}
