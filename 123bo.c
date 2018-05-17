#include <stdio.h>
#include <stdint.h>
#include "math.h"

int main(void)
{
  /* &位与 |位或 ~位反 ^异或 >> << */
  int a = 0b1;
  int b = 0b0;
  printf("%d\n", a & b);
  printf("%d\n", a | b);
  printf("%d\n", a ^ b);

  /* 无符号数 */
  uint8_t c = 1;		/* 0b00000001 */
  c = ~c;
  printf("%d\n", c);		/* 254 */
  //printf("c=%d, ~c=%d\n", c, ~c); /* ~c应为254，但结果为c=1, ~c=-2，??? */
  /* 为什么下面的~c不是254呢？
     把c当成了有符号数了
  */
  uint8_t d = 0b11111110;
  printf("%d\n", d);		/* 254 */

  /* 有符号数 */
  int8_t e = 1;			/* -128,...-2,-1,0,1,2,...,127 */
  e = ~e;			/* 有符号数取反，是它的镜像，0取反为-1 */
  printf("%d\n", e);		/* -2 */


  /* 移位 */
  int f = 8;
  printf("%d\n", f<<1);		/* << 相当于*2；>> 相当于/2 */
  
  return 0;
}
