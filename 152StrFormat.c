#include <stdio.h>
#include <string.h>
/* 字符串的格式化 */

int main(void)
{
  /* char * str = "Hello"; */
  /* int a = 11; */
  /* char dist[20]; */
  /* float b = 3.14; */
  /* memset(dist, 0, 20); */
  /* sprintf(dist, "%s %d, MATH_PI=%.2f", str, a, b); */
  /* puts(dist); */
  /* Hello 11, MATH_PI=3.14 */
    
  char * str = "Item 100";
  char buf[10];
  memset(buf, 0, 10);
  int a;
  sscanf(str, "%4s %d", buf, &a);
  printf("String is %s, int value is %d\n", buf, a);
  /* String is Item, int value is 100 */
  
  return 0;
}

