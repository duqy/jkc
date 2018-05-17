#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  void *data = "Hello World";	/* 无类型指针可指向任意类型数据 */
  printf("%s\n", data);

  void * da = malloc(8);
  //printf("%ld\n", sizeof(da[0])); /* 1；无类型指针是以一个字节长度访问 */
  int *intData = da;		  /* 将无类型 转为 int类型，会以4byte访问 */
  printf("%ld\n", sizeof(intData[0])); /* 4 */
  intData[0] = 1111;
  printf("%d\n", intData[0]);
  free(da);
  
  return 0;
}
