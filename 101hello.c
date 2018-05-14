#include <stdio.h>

/* 常量 */
#define MY_AGE 100
/* define看不出常量类型，编译期替换 */
const double PI = 3.1415;
/* 可看出类型，运行期处理，推荐 */

int main() {
    /* 变量 */
    int a = 10;
    printf("The num is %d\n", a);
    a = 11;
    printf("The num is %d\n", a);

    /* 常量 */
    printf("My age is %d\n", MY_AGE);
    printf("Pi is %lf\n", PI);
    
    return 0;
}
