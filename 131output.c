#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* 输出字符 */
  putchar(48);			/* 0；putchar(0-255) */
  
  char ch = 'b';
  putchar(ch);			/* b */

  /* 输出字符串 */
  puts("!!!Hello World!!!");	/* 0b!!!Hello World!!! */
  /* 为什么不是!!!Hello World!!! */

  char str[] = "hello world";
  puts(str);			/* hello world */
  
  return 0;
}

