#include "main.h"

/**
 * sign_count - count how many '-' to determine the sign of the number.
 * @s: pointer to the string.
 * Return: number of '-'.
 */

static int sign_count(char *s)
{
	int i;
	int sign;

	i = 0;
	sign = 0;
	while (s[i] && (s[i] > '9' || s[i] < '0'))
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	return (sign);
}

/**
 * check_string - checks if there is no number in the string.
 * @s: pointer to string.
 * Return: 0 if there is a number, 1 if not.
 */

static int check_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] <= '9' && s[i] >= '0')
			return (0);
		i++;
	}
	return (1);
}

/**
 * conv - convert to integer.
 * @s: pointer to string.
 * @i: index of where the digit found in the string.
 * Return: the integer.
 */

static int conv(char *s, int i)
{
	int num;

	num = 0;
	while (s[i] <= '9' && s[i] >= '0')
	{
		num += s[i] - '0';
		if ((s[i + 1] <= '9') && (s[i + 1] >= '0'))
			num *= 10;
		i++;
	}
	return (num);
}

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string.
 * Return: the integer.
 */

int _atoi(char *s)
{
	int sign;
	int i;
	int num;

	if (check_string(s))
		return (0);
	sign = sign_count(s);
	i = 0;
	while (s[i])
	{
		if (s[i] <= '9' && s[i] >= '0')
		{
			num = conv(s, i);
			break;
		}
		i++;
	}
	if ((sign % 2) != 0)
		num *= -1;
	return (num);
}
