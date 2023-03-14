#include "main.h"

/**
 * check - checks for words and free them.
 * @words: pointer to the words.
 * @row: number of words.
 * Return: 0 if there is nothing to free, otherwise 1.
 */

int check(char **words, int row)
{
	if (!words[row])
	{
		while (row)
			free(words[row--]);
		return (1);
	}
	return (0);
}

/**
 * words_counter - count how many words in the string.
 * @str: pointer to the string.
 * Return: number of words.
 */

int words_counter(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == 32)
			i++;
		if (str[i] && str[i] > 32)
			words++;
		while (str[i] && str[i] > 32)
			i++;
	}
	return (words);
}

/**
 * filler - allocates and fill the pointers.
 * @str: pointer to the string.
 * @start: index to the start of the word in the string.
 * @len: length of the word in the string.
 * Return: pointer to the word, NULL if it fails.
 */

char *filler(char *str, int start, int len)
{
	int i;
	char *word;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (str[start] && i < len)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * strtow - splits a string into words.
 * @str: pointer to the string.
 * Return: pointer to an array of strings (words), NULL if it fails.
 */

char **strtow(char *str)
{
	char **words;
	int i;
	int len;
	int height;
	int row;
	int start;

	start = 0;
	i = 0;
	row = 0;
	len = 0;
	if (!str || (str[0] == '\0'))
		return (NULL);
	height = words_counter(str);
	if (!height)
		return (NULL);
	words = malloc(sizeof(char *) * (height + 1));
	if (!words)
		return (NULL);
	words[height] = NULL;
	while (row < height)
	{
		while (str[i] && str[i] == 32)
			i++;
		start = i;
		while (str[len + i] && (str[len + i] != 32))
			len++;
		i += len;
		words[row] = filler(str, start, len);
		if (check(words, row++))
		{
			free(words);
			return (NULL);
		}
		len = 0;
	}
	return (words);
}
