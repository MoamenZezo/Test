#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
	int i;
	char *buffer = malloc(sizeof(char) * 4096);
	char *str = "hello mr moamen";
	buffer = spec(str);

	printf("%s\n", buffer);
	return (0);
}