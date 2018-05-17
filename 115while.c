#include <stdio.h>

int main(void)
{
  int i = 0;
  /* while (i<10) { */
  /*   if (i%2) {			/\* 奇数 *\/ */
  /*     printf("%d\n", i); */
  /*   } */
  /*   ++i; */
  /* } */

  while (i<0) {
    printf("while: %d\n", i);
  }
  
  do
    {
      printf("do-while: %d\n", i);
      ++i;
    } while (i<0);
  /* 区别：
     当i<0不成立时，while不输出；do-while会先输出，再判断条件是否成立
 */
  return 0;
}
