#include "main.h"

int main(int argc, char **argv)
{
	char *buffer = spec(argv[1], argv[2]);
	printf("%s\n", buffer);
	return (0);
}