#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 /* label: */
 /*  printf("101\n"); */
 /*  printf("102\n"); */
 /*  printf("103\n"); */
 /*  goto label; */
  /* 循环输出 */

  int i = 0;
 label: printf("%d\n", i);
  i++;
  if (i<100) {
    goto label;
  }
  return EXIT_SUCCESS;
}
