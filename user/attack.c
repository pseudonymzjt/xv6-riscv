#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
#include "kernel/riscv.h"

int
main(int argc, char *argv[])
{
  // Your code here.
  sbrk(32 * PGSIZE);
  printf("%s\n", (char*)0x15020);
  exit(1);
}
