#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
  /* int32_t len = 10; */
  /* int32_t arr[len]; */

  /* int ar[] = {1,3,4,5,6,9,8,7,2}; */
  
  /* clear array */
  /* for (int32_t j = 0; j < len; ++j) { */
  /*   arr[j] = 0; */
  /* } */
  
  /* for (int32_t i = 0; i < len; ++i) { */
  /*   printf("index %d, and value is %d\n", i, arr[i]); */
  /* } */

  /* 二维数组 */
  /* int arr[3][4]; */

  int ar[3][4] = {  {1,2,3,4},{5,6,7,8},{9,10,11,12}  }; /* 需指定长度 */
  
  /* clear array */
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      arr[i][j] = 0;
    }
  }

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      printf("index(%d,%d),%d\n", i, j, arr[i][j]);
    }
  }
  
  printf("%d\n", arr[i][j]);

  
  return 0;
}
/* 
index 0, and value is 194
index 1, and value is 0
index 2, and value is 625920566
index 3, and value is 32766
index 4, and value is 1
index 5, and value is 0
index 6, and value is 245619749
index 7, and value is 32611
index 8, and value is 1
index 9, and value is 0
int 是一不定长的类型；可用 int32_t 统一为4byte；
分配的内存被其它程序使用，C直接分配使用，不处理，因此才有上面的垃圾值
*/
