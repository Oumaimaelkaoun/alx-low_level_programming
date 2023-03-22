#include<stdio.h>

/**
 * _isalpha - print _isalpha
 * @c: variable integer
 * Return: 0 (SUCCESS)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
------------------------------------------
#include <stdio.h>
#include "main.h"

/**
 * print_sign - print_sign
 * @n : variable integer
 * Return: 0 (SUCCESS)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
