#include <stdio.h>
#include <new.h>

class Person{	// ���ࡪ" �� " ��
public:
  Person() {}
  virtual ~Person() {}
  virtual void showSpeak() {} // ���麯��������ὲ��
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
  Person *p = new Chinese;
  p->showSpeak();
  p->~Person(); //��ʽ������������
  //�����ڴ���pָ��ĵ�ַ��ΪChinese���¶�����׵�ַ��������Chinese�Ĺ��캯������
  //�������ظ�ʹ��ͬһ�����ڴ棬�Խ�Լ�ڴ�ռ�
  p = new (p) Chinese(); 
  delete p;

  return 0;
}