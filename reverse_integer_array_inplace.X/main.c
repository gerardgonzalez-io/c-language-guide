/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 14, 2025, 3:17 PM
 */


#include <xc.h>
#include <stdio.h>

// Arrays are passed to functions by reference rather than by value.
void reverseArray(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void main(void) 
{
    int size = 10;
    int myArray[size];
    
    for (int i = 0; i < size; i++) 
    {
        myArray[i] = 9 + i;
    }
 
    printf("Array: \n");

    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }    
    
    printf("\n");
    
    reverseArray(myArray, size);
    
    printf("Reversed array: \n");
  
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    return;
}
 /*
  * Arrays are Passed by Reference
  * 
  *  When you pass an array to a function 
  *  (like reverseArray(arr, size)), 
  *  what is actually passed is the
  *  memory address of the first element of the array.
  * 
  * 
  * Why Not Copy the Array?
  * 
  * C avoids copying arrays when passing them to 
  * functions to improve efficiency, especially 
  * for large arrays. Copying would involve creating 
  * a duplicate array in memory, which can be time-consuming 
  * and memory-intensive.
  * 
  */