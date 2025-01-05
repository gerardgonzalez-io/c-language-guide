/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 5, 2025, 4:37 PM
 */

#include <xc.h>
#include <stdio.h>

int         N = 32767; // the compiler assumed that N is signed and short
short       shortSum = 0;
int         intSum = 0;
long        longSum = 0;
long long   longLongSum = 0;

/*
 
 N = 2  -> Compiler assumed it is -> char signed and short 8-bits
 
 N = 2.0 -> Compiler assumed it is -> float signed short 32-bits
 
 N = 33000 -> the number is too big to be short so the compiler assumed it is -> int signed long 32-bits
 
 */

void main(void) 
{
    if (N < 1) 
    {
        printf("Invalid input. N must be positive.\n");
    }
    
    for (int i = 1; i <= N; i++) 
    {
        shortSum += i;      // May overflow quickly
        intSum += i;        // May overflow if N is large (e.g., around 46,341 for 16-bit int)
        longSum += i;
        longLongSum += i;   // Can handle much bigger ranges before overflow
    }
 
    printf("\nSummation from 1 to %d\n", N);
    printf("\n");
    printf("Using short:        %hd\n", shortSum);
    printf("Using int:          %d\n", intSum);
    printf("Using long:         %ld\n", longSum);
    printf("Using long long:    %lld\n", longLongSum);
    printf("\n");
    
    printf("Size of shortSum:       %zu bytes\n", sizeof(shortSum));
    printf("Size of intSum:         %zu bytes\n", sizeof(intSum));
    printf("Size of longSum:        %zu bytes\n", sizeof(longSum));
    printf("Size of longLongSum:    %zu bytes\n", sizeof(longLongSum));
    
    return;
}

/*

Observing Possible Overflow

A short often has a range of ?32768 to +32767 (16 bits), 
which might overflow even for relatively small ?.

An int on most modern desktop systems is 32 bits, 
but can still overflow if ? is large (the maximum sum can exceed 2,147,483,647).

A long is often 32 bits on many systems (including many 64-bit Windows compilers), 
but on some Unix-like 64-bit systems, long can be 64 bits.

A long long is almost always 64 bits (?9,223,372,036,854,775,808 to +9,223,372,036,854,775,807), 
which can handle much bigger sums before overflowing.

Try different ? values (like 100, 10,000, 50,000) to see which types overflow and 
how the range differences among these types affect the final result.

*/
