#include <stdio.h>

class Person {
public:
  Person() {
    age = 20;
  }
  ~Person() {
    printf("~Person()\n");
  }
  int age;
};

int main(int argc, char* argv[]) {
  Person *objs = new Person[3];  //�����������
  delete[] objs;                 //�ͷŶ�������
  return 0;
}