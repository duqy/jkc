#include <stdio.h>

int main()
{
  float a = 3.1;		/* 单精度,4byte */
  double b = 2.1;		/* 双精度,8byte */
  long double c = 1.1;		/* 长双精度,16byte */
  /* js中，只有一个Number(浮点型)表示数，用浮点型表示所有数 */
  /* 银行存款只能用整型数据，以分存，浮点型有误差 */
  printf("a=%f, b=%f, c=%lf\n", a, b, c); /* a=3.100000, b=2.100000, c=0.000000 */
  printf("a=%f, b=%f, c=%Lf\n", a, b, c); /* a=3.100000, b=2.100000, c=1.100000 */
  /* 注意：是%Lf */
  return 0;
}
