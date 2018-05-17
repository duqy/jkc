#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
  char * str = "11";
  int a;
  sscanf(str, "%d", &a);
  printf("Int value is %d\n", a); /* Int value is 11 */

  double var = atof("3.14");
  printf("%f\n", var);	/* 3.140000 */

  int val = 1111;
  char buf[10];
  sprintf(buf, "%d", val);
  puts(buf);			/* 1111 */
  
  return 0;
}
