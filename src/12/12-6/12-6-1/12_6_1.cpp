#include <stdio.h>

class Person{	// ���ࡪ" �� " ��
public:
  Person() {
    showSpeak();  //�����麯������ʧЧ
  }
  virtual ~Person() {}
  virtual void showSpeak() {
    printf("Speak No\n");
  } 
};
 
class Chinese : public Person {	// �й��ˣ��̳�������
public:
  Chinese() {}
  virtual ~Chinese() {}
  virtual void showSpeak() {	// ���ǻ����麯��
    printf("Speak Chinese\r\n");
  }
};

int main(int argc, char* argv[]) {
  //�����������
  Chinese chinese;
  return 0;
}