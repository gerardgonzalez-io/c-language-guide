/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 14, 2025, 4:46 PM
 */


#include <stdio.h>

// Custom strlen implementation
int myStrLen(const char *str) 
{
    int length = 0;
    
    while( *str != '\0' )
    {
        length++;
        str++;
    }
    return length;
}

// Custom strcpy implementation
void myStrCpy(char *dest, const char *src)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void main(void)
{
    char original[] = "Hola soy Goku";
    char copy[100];
    
    myStrCpy(copy, original);
    
    int lengthOriginal = myStrLen(original);
    
    printf("Original string: \"%s\"\n", original);
    printf("Length of original: %d\n", lengthOriginal);
    printf("Copied string: \"%s\"\n", copy);
    
    return;
}