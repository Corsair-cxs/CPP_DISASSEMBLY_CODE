#include <stdio.h>

class Person {
public:
  void show();
  static int count; 	//��̬���ݳ�Ա
  int age;		//��ͨ���ݳ�Ա
};

int Person::count = 0;

void Person::show()  {
  printf("age = %d , count = %d", age, count);
}

int main(int argc, char* argv[]) {
  Person person;
  person.age = 1; 
  person.count = 2;
  person.show();
  return 0;
}