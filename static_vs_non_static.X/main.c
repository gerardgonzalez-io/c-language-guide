/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 7, 2025, 3:25 PM
 */


#include <xc.h>
#include <stdio.h>

void incrementCounterStatic(void) 
{
    static int staticCount = 0; /* retains its value between calls just initialized to 0 the first time the function is called*/
    staticCount++;
    printf(" [static] staticCount = %d\n", staticCount);
}

void incrementCounterNonStatic(void) 
{
    int nonStaticCount = 0; /* reinitialized to 0 every time the function is called */
    nonStaticCount++;
    printf(" [non-static] nonStaticCount = %d\n", nonStaticCount);
}

void main(void) {
    int i;
    
    printf("Calling incrementCounterStatic three times:\n");
    for(i = 0; i < 3; i++)
    {
        incrementCounterStatic();
    }
    
    printf("\nCalling incrementCounterNonStatic three times:\n");
    for(i = 0; i < 3; i++)
    {
        incrementCounterNonStatic();
    }
    
    return;
}
/*
    STATIC VARIABLES
 * 
 * 1. Always have a permanent address in memory.
 * 2. Always exists in entire life of the program (Infinite lifetime).
 * 3. Global variables are always static.
 * 
 * The only time this variables disappears is when the power is remove.
 * 
 * You only need to use "static" keyword when you have a static variable inside a function.
 * 
 * Static variables inside a function behave more likely a global variable however if you try to access them outside its scope you will have an error.
 * 
 
 */