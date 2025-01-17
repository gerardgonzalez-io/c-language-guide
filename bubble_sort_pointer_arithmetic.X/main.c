/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 17, 2025, 2:53 PM
 */


#include <xc.h>
#include <stdio.h>
#include <string.h>

// Helper function to swap two integers in memory
void swap(uint8_t *a, uint8_t *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(void) 
{
    uint8_t array[6] = {7,5,2,9,1,5};
    //uint8_t length = strlen(array);
    //  This will cause an unexpected behavior in your C program arises from using the strlen function on an array of integers, 
    //  which is incorrect and undefined behavior.
    //  strlen is for strings, not numeric arrays
    
    uint8_t length = sizeof(array) / sizeof(array[0]); // Correct way to get array length
    
    
    /* Explanation of Fix:
     * 
     * 1. Using sizeof(array) for length:
     * 
     *      sizeof(array) gives the total size of the array in bytes.
     *      sizeof(array[0]) gives the size of one element of the array (in bytes).
     *      Dividing sizeof(array) by sizeof(array[0]) gives the number of elements in the array, which is its length.
     * 
     * 2. Prevents out-of-bounds access:
     * 
     *  By explicitly calculating the correct length, 
     *  the loop only iterates over valid elements of the array, 
     *  avoiding garbage values and undefined behavior.
     * 
     */
    
    /* //////////// */
    /* DEMOSTRATION */
    /* //////////// */

    uint8_t myArray[6] = {7, 5, 2, 9, 1, 5};

    uint8_t total_size = sizeof(myArray);       // Total size of array in bytes
    uint8_t element_size = sizeof(myArray[0]); // Size of one element in bytes
    uint8_t num_elements = total_size / element_size;

    printf("Total size of array: %u bytes\n", total_size);
    printf("Size of one element: %u bytes\n", element_size);
    printf("Number of elements: %u\n", num_elements);
    
    /* //////////// */
    /* DEMOSTRATION */
    /* //////////// */
    
    
    // Bubble Sort using pointer arithmetic
    for (uint8_t i = 0; i < length - 1; i++)
    {
        for (uint8_t j = 0; j < length - 1 - i; j++ ) 
        {
            // Instead of arr[j], we use *(arr + j)
            if (*(array + j) > *(array + j + 1)) 
            {
                swap((array + j), (array + j + 1));
            }
        }
    }
    
    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return;
}
