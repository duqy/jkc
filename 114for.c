#include <stdio.h>

int main()
{
  /* for (int i = 0; i < 100; ++i) { */
  /*   printf("Number: %d\n", i); */

  /*   for (int j = 0; j < 10; ++j) { */
  /*     printf("%d", j); */
  /*   } */
  /*   printf("\n"); */

  /*   if (i > 50) {		/\* i=51时退出 *\/ */
  /*     break; */
  /*   } */
  /* } */

  
  /* 9*9 */
  /*  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= i; ++j) {
      printf("%d*%d=%d\t", j, i, i*j);

      if (i*j>=24) {
	goto end;
      }
    }
    printf("\n");
  }
 end:
  */

  for (int i = 0; i < 10; ++i) {
    printf("Item: %d\n", i);

    if (i==5) {
      //break;
      continue;			/* 跳过本次循环 */
    }
    printf("Number: %d\n", i);
  }
  
  return 0;
}
/* break 跳出当前循环 */
/* 使用goto可跳出多层循环 */
