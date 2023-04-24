#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int __attribute__((unused)) ac, char **arg)
{
	char **arg_pointer = arg;

	while (*arg_pointer != NULL)
	{
		write(STDOUT_FILENO, *arg_pointer, strlen(*arg_pointer));
		write(STDOUT_FILENO, "\n", 1);
		arg_pointer++;
	}

	return (0);
}
