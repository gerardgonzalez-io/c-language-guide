/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 5, 2025, 11:24 AM
 */


#include <xc.h>
#include <stdio.h>
#include "main.h"

unsigned int   quantity;
/*
 * Explanation: 
 * 
 * The variable `quantity` is declared as `unsigned int`, which means it can only store non-negative values.
 * 
 * When a negative number (e.g., -2) is assigned to `quantity`, an implicit type conversion occurs.
 * 
 * In C, negative values assigned to `unsigned int` are wrapped around using two's complement representation.
 * 
 * For example:
 * 
 *    - On a 16-bit system, `-2` becomes `65,534`.
 *    - On a 32-bit system, `-2` becomes `4,294,967,294`.
 * 
 * This happens because unsigned integers interpret the binary representation of a negative value as a large positive value.
 * 
 * To avoid such behavior:
 * 
 *    - Use `int` for signed integers if negative values are expected.
 *    - Validate inputs or assignments to ensure they match the intended variable type.
 */

void main(void) 
{
    
    productName[21]     = "Laptop";
    unitPrice           = 900.9f; 
    quantity            = -2;
    taxRate             = 7.5f;
    
    subtotal = unitPrice * quantity;
    taxAmount = subtotal * (taxRate / 100.0f);
    totalCost = subtotal + taxAmount;

    // Print results
    printf("\n--- Sales Invoice ---\n");
    printf("Product Name: %s\n", productName);
    printf("Unit Price: $%.2f\n", unitPrice);
    printf("Quantity: %d\n", quantity);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax Amount (at %.2f%%): $%.2f\n", taxRate, taxAmount);
    printf("Total Cost: $%.2f\n", totalCost);
    printf("Size of quantity: %zu bytes\n", sizeof(quantity));
    
    return;
}
