#include <stdio.h>

class Person {
public:
  Person() {
    age = 1;
  }
  ~Person() {
    printf("~Person()\n");
  }
private:
  int age;
};

int main(int argc, char* argv[]) {
  Person person;
  return 0;  //�˳������������������
} 