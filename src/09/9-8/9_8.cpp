#include <stdio.h>

class Person {
public:
  int count;
  int buffer[10]; //�����������ݳ�Ա������Ĵ�СΪ 44 �ֽ�
};

Person getPerson()  {
  Person person;
  person.count = 10; 
  for (int i = 0; i < 10; i++){ 
    person.buffer[i] = i+1;
  }
  return person;  //���ؾֲ�����
}

int main(int argc, char* argv[]) {
  Person person;
  person = getPerson();
  printf("%d %d %d", person.count, person.buffer[0], person.buffer[9]);
  return 0;
}