#include <stdio.h>

class Base {	
public:
  Base() {
    printf("Base\n");
  }
  ~Base() {
    printf("~Base\n");
  }
  void setNumber(int n) {
    base = n;
  }
  int getNumber() {
    return base;
  }
public:
  int	base;
};


class Member{
public:
  Member()  {
    member = 0;
  }
  int member;
};

class Derive : public Base  {
public:
  Derive():derive(1)  {
    printf("ʹ�ó�ʼ���б�\n");
  }
public:
  Member member;  //���ж�������������Ϊ��Ա
  int derive;
};

int main(int argc, char* argv[]) {
  Derive derive; 
  return 0;
}