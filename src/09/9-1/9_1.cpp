#include <stdio.h>

class Person {		//PersonΪ���������ƣ���ͬ���ˡ��������
public:
  Person()  {
    age = 18;
    height = 180;
  }

  int getAge() {	//���Ա���������������Ϊ���ԡ��ȡ�˯��
    return age;
  }

  int getHeight() {
    return height;
  }
private:
  int age;		//�����ݳ�Ա�����������ߡ����ص�
  int height;
};

int main(int argc, char* argv[]) {
  Person person;
  return 0;
}