#include <stdio.h>

int main() {
  int a = 10;			/* int 4byte */
  int b = -10;
  long long c = 22;
  /* long:32位4byte,64位8byte */
  /* long long 不管在32位还是在64位系统中，均是8byte */
  printf("a=%d, b=%d, c=%ld\n", a, b, c); /* a=10, b=-10, c=22 */

  int d = 0b100;		/* 二进制 */
  int e = 0xB;			/* 十六进制 */
  int f = 010;			/* 八进制 */
  printf("d=%d, e=%d, f=%d\n", d, e, f); /* d=4, e=11, f=8 */

  unsigned int g = 33;
  printf("g=%d\n", g);		/* g=33 */

  /* C11，新添加一头文件stdint.h,定义了一些常用int类型，
  int8_t,int16_t,int64_t; 各个平台表示的数一样，不受平台限制 */
  int32_t h = 55;		/* 32位，即常用的int */
  int8_t i = 128;		/* -128，8位最大是127，已超出范围 */
  uint8_t j = 255;
  int64_t k = 88;		/* 表示long long int */
  printf("h=%d, i=%d, j=%d, k=%d\n", h, i, j, k);
  
  return 0;
}
/* 问题：不支持C11，怎么指定编译器版本？ */
