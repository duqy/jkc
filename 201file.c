#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  /* 写文件 */
  FILE * f = fopen("201file.txt", "w");
  /* 有时由于权限原因，创建文件失败，可作判断 */
  if (f != NULL) {
    /* fputc('A', f); */
    fputs("Hello World\n", f);
    fclose(f);
  } else {
    puts("Can't save file");
  }

  puts("End\n");


  /* 读文件 */
  FILE * r = fopen("201file.txt", "r");
  if (r) {
    /* char ch = fgetc(f); */
    /* printf("%c\n", ch);		/\* H *\/ */

    /* char buf[15]; */
    /* fgets(buf, 6, f);		/\* 缓冲，6个，文件指针 *\/ */
    /* puts(buf);			/\* Hello *\/ */

    char buf[30];
    memset(buf, 0, 30);
    for (int i = 0; i < 20; ++i) {
      char ch = fgetc(f);
      if (i != EOF) {
	buf[i] = ch;
      } else {
	break;
      }
    }
    printf("%s\n", buf);
    fclose(r);
  } else {
    puts("Can't read file");
  }
  
  return 0;
}
