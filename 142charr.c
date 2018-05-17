#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char str[10];			/* 未初始化，长度为0 */
  char str1[10] = "Hello";	/* 长度为5 */
  char str2[10] = {'H','e','\0','l','l','o','\0'}; /* 最好写上\0 */

  printf("string length: %ld, string is %s\n", strlen(str2), str2);
  /* string length: 2, string is He */
  memset(str1, 0, 10);		/* 字符数组清零；参数：数组，0，长度 */

  char str3[] = "Hello World";
  for (int i = 0; i < strlen(str3); ++i) {
    printf("[index:%d]%c\n", i, str3[i]);
  }

  
  return 0;
}
