#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  /* 格式化写出 */
  /* FILE * f = fopen("202ff.txt", "w"); */
  /* if (f) { */
  /*   int i = 0; */
  /*   for (i = 0; i < 100; ++i) { */
  /*     fprintf(f, "Item %d\n", i); */
  /*   } */
  /*   fclose(f); */
  /* } else { */
  /*   printf("Can't write to file\n"); */
  /* } */

  /* 格式化读入 */
  FILE * r = fopen("202ff.txt", "r");
  if (r) {
    int a;
    fscanf(r, "Item %d\n", &a);
    fscanf(r, "Item %d\n", &a);
    printf("Num read is %d\n", a);
    fclose(r);
  } else {
    puts("Can't read file");
  }
  
  return 0;
}
