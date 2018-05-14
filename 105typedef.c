#include <stdio.h>

typedef int64_t jk_long;
/* typedef 给一数据类型起一别名，可用于区分不同库中同名的数据类型 */
typedef uint8_t jk_char;	/* 较常用 */

int main()
{
  jk_long a = 11;
  printf("%d\n", a);

  jk_char c = 'c';
  printf("%c\n", c);
  
  return 0;
}
/* 计算机中全部存储的是整数，二进制的读取解析由程序设定 */
