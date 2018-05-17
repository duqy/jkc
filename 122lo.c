#include <stdio.h>
#include <stdint.h>
#include "math.h"

#define MALE 1
#define FEMALE 2

int main(void)
{
  /* 逻辑运算 && || ! */
  int32_t score = 101;

  if (score>=60 && score<=100) {
    printf("OK\n");
  } else {
    printf("Fail or Invalid score\n");
  }

  if (score<60 || score>100) {
    printf("Fail or Invalid score\n");
  } else {
    printf("OK\n");
  }

  int gender = MALE;
  if (gneder != MALE) {
    printf("The person is female\n");
  } else {
    printf("The person is male\n");
  }
  
  return 0;
}
