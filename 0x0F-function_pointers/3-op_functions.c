#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: sec number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diff of two numbers
 * @a: fisrt number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: fisrt number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two numbers
 * @a: fisrt number
 * @b: second number
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
