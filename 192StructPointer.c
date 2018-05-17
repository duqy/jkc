#include <stdio.h>
#include <stdlib.h>

typedef struct _Student{
  char * name;
  int age;
} Student;

Student * createStudent(char * name, int age) {
  /* Student s1 = {"jj", 33};	/\* s1为局部变量，fun()结束，s1会销毁 *\/ */
  /* Student s2 = s1;		/\* 创建新的空间给s2，再将s1的内容复制到s2 *\/ */
  /* s2.age = 22; */
  /* printf("(s1.name=%s, s1.age=%d),(s2.name=%s, s2.age=%d)\n", s1.name, s1.age, s2.name, s2.age); */
  /* (s1.name=jj, s1.age=33),(s2.name=jj, s2.age=22) */
  
  /* 开发中，多处引用结构体，在各处操作同一结构体内存，而不想作内存复制 */
  /* 使用结构体指针实现 */
  /* Student * s2 = &s1; */
  /* s1.age = 11; */
  /* printf("(s1.name=%s, s1.age=%d),(s2.name=%s, s2.age=%d)\n", s1.name, s1.age, s2->name, s2->age); */
  /* (s1.name=jj, s1.age=11),(s2.name=jj, s2.age=11) */

  Student * s1 = malloc(sizeof(Student));
  s1->name = name;
  s1->age = age;
  /* s1->name = "Zhangsan"; */
  /* s1->age = 11; */
  /* Student * s2 = s1; */
  /* s1->age = 20; */
  /* printf("(s1.name=%s, s1.age=%d),(s2.name=%s, s2.age=%d)\n", s1->name, s1->age, s2->name, s2->age); */
  /* (s1.name=Zhangsan, s1.age=20),(s2.name=Zhangsan, s2.age=20) */

  return s1;
}

int deleteStudent(Student * p) {
  free(p);
}


int main(void)
{
  /* fun(); */

  Student * s = createStudent("Lisi", 22);
  printf("name=%s, age=%d\n", s->name, s->age); /* name=Lisi, age=22 */
  deleteStudent(s);
  
  return 0;
}
/* 结构体是面向对象的原型 */
