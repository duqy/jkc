#include <stdio.h>

int main()
{
  /* 字符常量 */
  /* printf("Hello\nWorld");	/\* \n换行 *\/ */
  /* printf("Hello\rWorld");	/\* \r回车，指针移到开头，覆盖了Hello *\/ */
  /* printf("Hello\bWorld\n");	/\* \b退格，删除了o *\/ */
  /* printf("Hello\tWorld\n");	/\* \t制表符，Tab *\/ */
  /* printf("Hello\fWorld\n");	/\* \f换页符 *\/ */
  /* printf("Hello\\World\n");	/\* \\表示\ *\/ */
  /* printf("\"Hello\\World\"\n");	/\* \"表示" *\/   */

  /* 字符变量 */
  printf("length of char:%d\n", sizeof(char)); /* length of char:1 */
  
  char ca = 'a';
  char cA = 'A';  
  printf("ca=%d, cA=%d\n", ca, cA);		/* ca=97, cA=65 */
  printf("ca=%c, ch=%c\n", ca, ca-32);		/* ca=a, ch=A */
  
  return 0;
}

/* 
Hello
WorldHellWorld
Hello	World
HelloWorld
Hello\World
"Hello\World"
*/
