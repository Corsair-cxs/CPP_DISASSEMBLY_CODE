#include <stdio.h>

class Person {
public:
  int age;
  int height;
};

void show(Person person)  {	//����Ϊ��Person�Ķ���
  printf("age = %d , height = %d\n", person.age, person.height);
}

int main(int argc, char* argv[]) {
  Person person;
  person.age = 1; 
  person.height = 2;
  show(person);
  return 0;
}