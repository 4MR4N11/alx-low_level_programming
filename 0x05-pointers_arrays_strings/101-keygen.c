#include "main.h"

/**
 * len_counter - count each character.
 * @pass: pointer to string.
 * Return: length.
 */
static int len_counter(char *pass)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (pass[i])
	{
		len = len + pass[i];
		i++;
	}
	return (len);
}

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	int len;
	char pass[30];
	char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	srand(time(0));
	while (len != 2772)
	{
		len = 0;
		i = 0;
		while (i < 30)
		{
			pass[i] = chars[rand() % 52];
			i++;
		}
		len = len_counter(pass);
	}
	printf("%s\n", pass);
	return (0);
}
