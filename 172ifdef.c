#include <stdio.h>
#include <stdlib.h>

#define WIN 1
#define LINUX 2
#define MAC 3

int sayHello()
{
  #if PLATFORM == WIN
  printf("Hello Windows\n");
  #elif PLATFORM == LINUX
  printf("Hello Linux\n");
  #elif PLATFORM == MAC
  printf("Hello Mac\n");
  #else
  printf("Unknown Platform\n");
  #endif
}

int main(void)
{
  sayHello();

  printf("!!!Hello World!!!\n");
  
  return 0;
}
/* 
gcc 172ifdef.c -DPLATFORM=1
./a.out
Hello Windows
*/
