#include <stdio.h>
#include <unistd.h>

int main(void)
{

    pid_t pid;
    pid_t ppid;
    /*wrtten before fork was called*/
    /*called fork*/
    pid = fork();
    //   printf("before fork i was one\n");

    // fork();

    if (pid == -1)
    {
        perror("unseccessful\n");
        return 1;
    }
    if (pid == 0)

    {
        sleep(40);
            printf("i am the child\n");
    }
    else {
        ppid = getppid();
        printf("parent ppid is %u\n", ppid);
    }

return 0;
}
