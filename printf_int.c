#include "holberton.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
<<<<<<< HEAD
	int num, last = n % 10,digit, exp = 1;
=======
=======
<<<<<<< HEAD
	int num, last = n % 10, digit, exp = 1;
=======
	int num, last = n % 10,digit, exp = 1;
>>>>>>> f7629b4aeb7f0784022f6a8a90f482e9292b5c8a
>>>>>>> origin/master
>>>>>>> cc6c87e7a03d002d5833b09493eaf7ef5edee945
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
<<<<<<< HEAD
	int num, last = n % 10,digit;
=======
=======
<<<<<<< HEAD
	int num, last = n % 10, digit;
=======
	int num, last = n % 10,digit;
>>>>>>> f7629b4aeb7f0784022f6a8a90f482e9292b5c8a
>>>>>>> origin/master
>>>>>>> cc6c87e7a03d002d5833b09493eaf7ef5edee945
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
