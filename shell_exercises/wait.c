#include <stdio.h>
#include <unistd.h>

int main(void)
{

    pid_t pid;

    /*child process is created*/
    pid = fork();

    /*if fork fails*/
    if (pid == -1)
    {
        perror("unseccessful\n");
        return 1;
    }
    /*in child process*/
    if (pid == 0)

    {

        printf("Child Process\n");
    }
    /*in parent Process*/
    else
    {
	sleep(30);
        printf("parent process \n");
    }

    return 0;
} 
