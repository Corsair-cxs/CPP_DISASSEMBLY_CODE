#include <stdio.h>

class Person {
public:
  Person() {
    age = 20;
  }
  int age;
};

int main(int argc, char* argv[]) {
  Person *p = new Person;
  //Ϊ��ͻ���������۵����⣬����û�м��new����ķ���ֵ
  p->age = 21;
  printf("%d\n", p->age);
  return 0;
}