#include "main.h"
/**
  * _abs - a function that computes the absolute value of an integer
  *
  * @n: a number to be checked for abs value
  *
  * Return: Always (0) on success
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
