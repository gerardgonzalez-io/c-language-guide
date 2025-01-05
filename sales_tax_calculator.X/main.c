/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 5, 2025, 11:24 AM
 */


#include <xc.h>
#include <stdio.h>
#include "main.h"

void main(void) 
{
    
    productName[21]     = "Laptop";
    unitPrice           = 899.9; 
    quantity            = 2;
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
