#include <stdio.h>

class Person {
public:
  Person() {
    age = 20;
  }
  int age;
};

int main(int argc, char* argv[]) {
  Person obj1;     //Person��û���ṩ����Ϊ�������õĹ��캯��
  Person obj2(obj1);
  return 0;
}