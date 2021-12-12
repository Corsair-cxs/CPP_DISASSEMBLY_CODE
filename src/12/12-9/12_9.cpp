#include <stdio.h>

class Sofa { 
public:
  Sofa() {
    color = 2;
  }

  virtual ~Sofa()  {	// ɳ��������������
    printf("virtual ~Sofa()\n");
  }
 
  virtual int getColor()  {	// ��ȡɳ����ɫ
    return color;
  }
  virtual int sitDown() {	// ɳ������������Ϣ
    return printf("Sit down and rest your legs\r\n");
  }
protected:
  int color;	// ɳ�����Ա����
};

//���崲��
class Bed {
public:
  Bed() {
    length = 4;
    width = 5;
  }

  virtual ~Bed() {  //��������������
    printf("virtual ~Bed()\n");
  }

  virtual int getArea() { //��ȡ�����
    return length * width;
  }

  virtual int sleep() {  //����������˯��
    return printf("go to sleep\r\n");
  }
protected:
  int length;	//�����Ա����
  int width;
};

//����ɳ�������壬������ Sofa ��� Bed ��
class SofaBed : public Sofa, public Bed{ 
public:
  SofaBed() { 
    height = 6;
  }

  virtual ~SofaBed(){	//ɳ�����������������
    printf("virtual ~SofaBed()\n");
  }

  virtual int sitDown() {	//ɳ������������Ϣ
    return printf("Sit down on the sofa bed\r\n");
  }

  virtual int sleep() {	//����������˯��
    return printf("go to sleep on the sofa bed\r\n");
  }

  virtual int getHeight() {
    return height;
  }

protected:
  int height;
};


int main(int argc, char* argv[]) {
  SofaBed sofabed;
  return 0;
}