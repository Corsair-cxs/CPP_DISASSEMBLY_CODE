#include <stdio.h>
#include <string.h>

class Person {
public:
  Person() {
    printf("Person()");
  }
  ~Person(){	
    printf("~Person()");
  }
};


Person g_person1;   //����ȫ�ֶ���
Person g_person2;   //����ȫ�ֶ���

int main(int argc, char* argv[]) {
  printf("main");
  return 0;
}