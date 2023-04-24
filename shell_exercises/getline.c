#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
   size_t n =10;
   char *buf = NULL;

   printf("Enter Name");
   getline(&buf, &n, stdin);

   printf ("name is %sBuffer size is %ld\n" , buf, n);
   free (buf);



    return 0;
}
