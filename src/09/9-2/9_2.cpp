#include <stdio.h>

class Person {
public:
  void setAge(int age) {		//���г�Ա����
    this->age = age;
  }
public:
  int age;				//�������ݳ�Ա
};

int main(int argc, char* argv[]) {
  Person person;
  person.setAge(5);			//���ó�Ա����
  printf("Person : %d\n", person.age);	//��ȡ���ݳ�Ա
  return 0;
}