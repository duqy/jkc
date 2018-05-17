#include <stdio.h>
#include <stdlib.h>
/* Function Pointer */

void hello(int a, int b, char * c) {
  printf("Hello World\n");
}

/* void hello() { */
/*   printf(Hello World\n); */
/* } */

typedef void(*SimpleFunc)(int, int, char*); /* 将函数指针定义为类型 */

int main(void)
{
  //hello();

  /* void(*fp)(int, int, char*) = &hello; */
  /* fp(0, 0, ""); */

  SimpleFunc fp = &hello;
  fp(0, 0, "");
  
  return 0;
}
