#include <stdio.h>

class Person {
public:
  virtual int getAge() {  //�麯������
    return age;
  }
  virtual void setAge(int age) {  //�麯������
    this->age = age;
  }
private:
  int age;
};

int main(int argc, char* argv[]) {
  Person person;
  return 0;
}