#include <stdio.h>
#include <stdlib.h>

//file(name, size)
/* struct _File{ */
/*   char *name;			/\* 指针类型长度为8 *\/ */
/*   int size;			/\* int 类型长度为4 *\/ */
/* }; */

/* typedef struct _File File; */

typedef struct _File{
  char *name;
  int size;
} File;


int main(void)
{
  /* struct File file; */
  /* file.name = "jk.txt"; */
  /* file.size = 111; */
  /* printf("File name is %s\n", file.name); */

  //  int arr[11] = {1,2,4,5,7,8};
  /* 数组初始化，按顺序赋值；数组元素长度一样，结构体元素长度可不一样 */
  /* struct File file = {"jj.txt", 222}; */
  File file = {"jj.txt", 222};
  printf("File name: %s, File size: %d\n", file.name, file.size);
  /* 结构体初始化与数组一样 */
  return 0;
}
