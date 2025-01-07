/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 7, 2025, 4:02 PM
 */


#include <xc.h>

int g_count = 0; // Global variable

void incrementGlobal(void) 
{
    g_count++;
}

void setGlobal(int value) 
{
    g_count = value;
    
}

void main(void) {
    
    // Local variable with the same name
    int g_count = 100;
    printf("Local g_count (in main) = %d\n", g_count);
    
    
    setGlobal(5);       // sets the global g_count to 5
    incrementGlobal();  // increments global g_count => now 6
    incrementGlobal();  // increments global g_count => now 7
    
    printf("Global g_count (after calls) = %d\n", g_count);
    // The local variable 'g_count' in main is overshadowing 
    // the global name if used directly.
    
    /*
     * Important Note: 
     * In ANSI C, the local g_count ?shadows? 
     * the global g_count. 
     * If we write g_count inside main, 
     * it actually refers to the local variable. 
     * So to access the global version, 
     * you?d typically rename the local variable 
     * or just avoid using the same name. 
     * 
     * This example is just to demonstrate overshadowing in principle.
     */
    
    
    return;
}


/* Technical Explanation */

/*
 * 
 * We have a global variable g_count that?s accessible by all functions.
 * 
 
 * 
 * In main(), we also have a local variable g_count, 
 * which shadows the global one within main(). 
 * 

 * 
 * Functions incrementGlobal() and setGlobal() 
 * operate on the global g_count 
 *  
 
 * 
 * Because the local variable in main() has the same name, 
 * printing g_count in main() prints the local one
 *
 
 */