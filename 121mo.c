#include <stdio.h>
#include <stdint.h>
#include "math.h"

int main(void)
{
  int32_t a = (10 + 2 - 8) * 9 / 3;	/* 12 */
  printf("a = %d\n", a);

  printf("%f\n", sin(M_PI/2));	/* 1.000000 */
  
  return 0;
}

/* www.cplusplus.com */
