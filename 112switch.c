#include <stdio.h>
#include <stdint.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

int main()
{
  int32_t dir = UP;

  switch (dir) {
  case UP: {
    printf("Go up\n");
    break;			/* 跳出当前判断 */
  }
  case DOWN: {
    printf("Go down\n");
    break;
  }
  case LEFT: {
    printf("Go left\n");
    break;
  }
  case RIGHT: {
    printf("Go right\n");
    break;
  }
  default:
    printf("dir unknown\not");
    break;
  }
  
  return 0;
}
/* emacs 代码重排在 C 中不起作用 */
