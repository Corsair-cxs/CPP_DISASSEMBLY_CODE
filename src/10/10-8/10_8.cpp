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
  Person *person = new Person();
  person->age = 21;              //Ϊ�˱��ڽ��⣬����û���ָ��
  printf("%d\n", person->age);
  delete person;
  return 0;
}