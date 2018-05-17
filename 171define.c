#include <stdio.h>
#include <stdlib.h>

/* #define THE_NUM 2 */
/* gcc 171define.c -DTHE_NUM=3  通过编译器预设宏 */
/* 注释后，IDE会报错，Properties->C/C++ Build-Settings-Symbols添加THE_NUM=4 */
int main(void)
{
  printf("The num is %d\n", THE_NUM);
  return 0;
}
