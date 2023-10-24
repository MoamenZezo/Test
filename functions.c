#include "main.h"

int _strlen(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		;

	return (i);
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

char *spec(char *str, char *target)
{
	char buffer[1024];

	strcpy(buffer, str);
	char *token = strtok(buffer, " ");
	
	while(token != NULL)
	{
		if(_strcmp(token, target) == 0)
		{
			return (token);
		}
		token = strtok(NULL, " ");
	}
	return ("Nothing !!");
}
