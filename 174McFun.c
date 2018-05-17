#include <stdio.h>
#include <stdlib.h>

#define MAX()
/* 不能播放 */

#define LOOP(FROM, TO, CONTENT) \
  for (int index = FROM; index < TO; ++index) {\
    CONTENT				       \
}

int _max(int a, int b) {
  return a>b ? a : b;
}

void jikeSayHi() {
  printf("Hi C\n");
}

void jikeSayHello() {
  printf("Hello C\n");
}
/* 开发中，若不想写前面的前缀，使用宏函数的参数连接 */
#define calljk(NAME) jike##NAME()

/* 宏函数的可变参数: ...表可变参数 */
#define LOG(LEVEL, FORMAT, ...) printf(LEVEL); printf(FORMAT, __VA_ARGS__);
#define LOG_E(FORMAT, ...) LOG("ERROR:", FORMAT, __VA_ARGS__);
#define LOG_W(FORMAT, ...) LOG("WARN:", FORMAT, __VA_ARGS__);
#define LOG_I(FORMAT, ...) LOG("INFO:", FORMAT, __VA_ARGS__);
#define LOG_D(FORMAT, ...) LOG("DEBUG:", FORMAT, __VA_ARGS__);

int main(void)
{
  printf("Max num is %f\n", MAX(2.2, 5.1));

  LOOP(2, 100, printf("Current Index is %d\n", index);)

  calljk(SayHi);

  LOG_E("Hello %s %d\n", "World", 100);
  LOG_W("Hello %s %d\n", "World", 100);
  LOG_I("Hello %s %d\n", "World", 100);
  LOG_D("Hello %s %d\n", "World", 100);
  
  return 0;
}
