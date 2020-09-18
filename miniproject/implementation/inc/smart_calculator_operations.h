#ifndef SMART_CALCULATOR_OPERATIONS_H_INCLUDED
#define SMART_CALCULATOR_OPERATIONS_H_INCLUDED
/**
* @file smart_calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __SMART_CALCULATOR_OPERATIONS_H__
#define __SMART_CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<math.h>

int add(int operand1, int operand2);

int subtract(int operand1, int operand2);

int multiply(int operand1, int operand2);

int divide(int operand1, int operand2);

int prime(int operand1);

int evenodd(int operand1);

int factorial(int operand1);

int positive(int operand1); 

int negative(int operand1); 

int zero(int operand1); 

int triangle_area(int op1, int op2, int op3);

int triangle_per(int op1, int op2, int op3);

int square_area(int op1);

int square_per(int op1);

int rectangle_area(int op1, int op2);

int rectangle_per(int op1, int op2);

int circle_area(int op1);

int circle_per(int op2);

#endif  /* #define __SMART_CALCULATOR_OPERATIONS_H__ */


#endif // SMART_CALCULATOR_OPERATIONS_H_INCLUDED
