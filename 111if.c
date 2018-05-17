#include <stdio.h>

int main()
{
  int a = 9;
  int b = 6;			/* 修改a,b的值，走不同的条件分支 */

  if (a>b) {
    printf("Max num is a, %d\n", a);
  } else {
    printf("Max num is b, %d\n", b);
  }

  int32_t score = 60;
  
  if (score>80) {
    printf("Fine\n");
  } else if (score>=60) {
    printf("OK\n");
  } else {
    printf("Fail\n");
  }
  
  return 0;
}
