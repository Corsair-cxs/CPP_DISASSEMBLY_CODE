#include <stdio.h>

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

class American : public Person { //�����ˣ��̳�������
public:
  American() {}
  virtual ~American() {}
  virtual void showSpeak() { //���ǻ����麯��
    printf("Speak American\r\n");
  }
};

class German : public Person { //�¹��ˣ��̳�������
public:
  German() {}
  virtual ~German() {}
  virtual void showSpeak() { //���ǻ����麯��
    printf("Speak German\r\n");
  }
};

void speak(Person* person){ //���������Ϣ��ȡ�麯���׵�ַ������
  person->showSpeak();
}

int main(int argc, char* argv[]) {
  Chinese chinese;
  American american;
  German german;
  speak(&chinese); 
  speak(&american); 
  speak(&german);
  return 0;
}