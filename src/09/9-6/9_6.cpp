#include <stdio.h>
#include <string.h>

class Person {
public:
  int age;
  int height;
  char name[32];  //�����������͵����ݳ�Ա
};

void show(Person person)  {
  printf("age = %d , height = %d name:%s\n", person.age, person.height, person.name);
}

int main(int argc, char* argv[]) {
  Person person;
  person.age = 1; 
  person.height = 2;
  strcpy(person.name, "tom");	 //��ֵ���ݳ�Ա����
  show(person);
  return 0;
}