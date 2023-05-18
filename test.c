#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int words_counter(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i] && str[i] != '\n')
	{
		while (str[i] && str[i] != '\n' && ((str[i] == 32) || (str[i] == 9)))
			i++;
		if (str[i] && str[i] != '\n' && str[i] > 32)
			words++;
		while (str[i] && str[i] != '\n' && str[i] > 32)
			i++;
	}
	return (words);
}

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string.
 * Return: On success, function returns a pointer to the duplicated string.
 * It returns NULL if it fails.
 */

char *_strdup(char *str)
{
	char *new;
	int i;

	i = -1;
	if (!str)
		return (NULL);
	new = malloc(sizeof(char) * _strlen(str) + 1);
	if (!new)
		return (NULL);
	while (str[++i])
		new[i] = str[i];
	return (new);
}

int main(int ac, char **av)
{
	char *buff = NULL;
	int ntokens;
	size_t len;
	ssize_t check;
	int i = 0;
	char **tokens;
	len = 0;

	while(1)
	{
		printf("$ ");
		check = getline(&buff, &len, stdin);
		if (check == -1)
		{
			perror("getline");
            exit(EXIT_FAILURE);
		}
		if(_strcmp(buff, "exit\n") == 0)
		{
			free(buff);
			exit(EXIT_SUCCESS);
		}
		ntokens = words_counter(buff);
		if (ntokens)
		{
			tokens = malloc(sizeof(char *) * ntokens);
			if (!tokens)
			{
				perror("malloc");
				exit(EXIT_FAILURE);
			}
			tokens[i++] = strtok(buff, " \t\n");
			while (tokens[i - 1])
			{
				tokens[i] = strtok(NULL, " \t\n");
				i++;
			}
		}
		
		
	}	

	return(0);
}