#include <stdio.h>
#include <string.h>
#include <stdint.h>
/* contract string */

int main(void)
{
  char * str1 = "Hello";
  char * str2 = "World";

  const uint32_t DIST_LEN = 20;
  char dist[DIST_LEN];
  memset(dist, 0, DIST_LEN);

  strcat(dist, str1);
  strcat(dist, " ");
  //  strcat(dist, str2);		/* Hello World */
  strncat(dist, str2, 3);	/* Hello Wor */

  puts(dist);
  
  return 0;
}
