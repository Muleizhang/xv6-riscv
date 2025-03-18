#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void print(char args[])
{
  write(1, args, strlen(args));
  write(1, "\n", 1);
}
int
main(int argc, char *argv[])
{
  int i;

  print("this is fun!");
  if (argc < 2)
  {
    fprintf(2, "Usage: fun int\n");
    exit(1);
  }
  for (i = 0; i < atoi(argv[1]); i++)
  {
    fun(i);
  }
  exit(0);
}
