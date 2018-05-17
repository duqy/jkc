#include <stdio.h>
#include <stdlib.h>
#include "173a.h"

int main(void)
{
  puts("!!!Hello World!!!");
  
  return 0;
}
/* 173a.h 与 173b.h 交叉引用；
   若注释掉
   #ifndef 173A_H_
   #define 173A_H_
   #endif
   则：因交叉引用，编译时报错
*/
