/*
 * File:   main.c
 * Author: gerardgonzalez
 *
 * Created on January 6, 2025, 10:53 AM
 */


#include <xc.h>
#include <stdio.h>

int x = 5;
int y = 2;
float answer;

// The variable answer is declared as a float,
// but the division operation x / y involves two integers (int type).
// In C, when you divide two integers, the result is also an integer,
// and any fractional part is truncated (not rounded). This result is then
// implicitly converted to float and assigned to answer.

int number1 = 5;
float number2 = 2;
float answer2;

// The variable answer2 is also declared as a float.
// However, in the division operation number1 / number2, one operand (number2) is a float,
// and the other (number1) is an int. In this case, C performs implicit type conversion:
// number1 is promoted to a float, and the division is performed as a floating-point operation.
// The result retains its fractional part and is directly assigned to answer2.

void main(void) 
{
    answer = x / y;
    
    answer2 = number1 / number2;
    
    printf("Answer: %.2f\n", answer);
    printf("\n");
    printf("Answer2: %.2f\n", answer2);
    
    return;
}
