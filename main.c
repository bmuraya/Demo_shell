#include "main.h"

int main(int ac, char **argv)
{
  char *command_line = "(Demo_shell) $ ";
  char *lineptr;
  size_t n = 0; 

 
 (void)ac; (void)argv;

  printf("%s", command_line);
  getline(&lineptr, &n, stdin);
  printf("%s\n", lineptr);

  free(lineptr);
  return (0);
}
