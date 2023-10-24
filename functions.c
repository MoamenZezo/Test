#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		;

	str[i] = '\0';
	return (0);
}

int _strcmp(char *str1, char *str2)
{
	int len1, len2, i;

	len1 = _strlen(str1);
	len2 = _strlen(str2);

	if (len1 != len2)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			if (str1[i] != str2[i])
			{
				return (-1);
			}
		}	
		return (0);
	}
}

char *spec(char *str)
{
	char *buffer = malloc(sizeof(char) * 4096);

	strcpy(buffer, str);

	char *token = strtok(buffer, " ");
	
	while(token != NULL)
	{
		if(_strcmp(token, "moamen") == 0)
		{
			return (token);
		}
		token = strtok(NULL, " ");
	}
	free (buffer);
	return (NULL);
}
