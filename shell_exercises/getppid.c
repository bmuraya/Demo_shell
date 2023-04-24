include <stdio.h>
#include <unistd.h>

/**
 * main -ppid function
 *
 * Return: Always 0.
 */

int main()
{
	int i = 12;
	int j = 5;
	int sum = i * j;
       pid_t parent_pid;
	pid_t child_pid;

	parent_pid = getppid();
	child_pid = getpid();
	printf("child_pid is %d\n", child_pid);
	printf("parent_pid is %d\n", parent_pid);
	printf("sum is %d\n", sum);
	return 0;
}
