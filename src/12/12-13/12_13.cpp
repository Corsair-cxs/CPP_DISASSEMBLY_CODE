#include <stdio.h>

//����Ҿ��࣬����࣬��ͬ���� A 
class Furniture  { 
public:
  Furniture() {
    printf("Furniture::Furniture()\n");
    price = 0;
  }
  virtual ~Furniture(){	//�Ҿ��������������
    printf("Furniture::~Furniture()\n");
  }

  virtual int getPrice()  {	//��ȡ�Ҿ߼۸�
    printf("Furniture::getPrice()\n");
    return price;
  };
protected:
  int price;	//�Ҿ���ĳ�Ա����
};

//����ɳ���࣬�̳����� Furniture����ͬ���� B
class Sofa : virtual public Furniture { 
public:
  Sofa() {
    printf("Sofa::Sofa()\n");
    price = 1;
    color = 2;
  }
  virtual ~Sofa()  {	//ɳ��������������
    printf("Sofa::~Sofa()\n");
  }
  virtual int getColor()  {	//��ȡɳ����ɫ
    printf("Sofa::getColor()\n");
    return color;
  }
  virtual int sitDown() {	//ɳ������������Ϣ
    return printf("Sofa::sitDown()\n");
  }
protected:
  int color;	// ɳ�����Ա����
};

//���崲�࣬�̳����� Furniture����ͬ���� C
class Bed : virtual public Furniture  { 
public:
  Bed()  {
    printf("Bed::Bed()\n");
    price = 3;
    length = 4;
    width = 5;
  }

  virtual ~Bed(){	//���������������
    printf("Bed::~Bed()\n");
  }

  virtual int getArea(){	//��ȡ�����
    printf("Bed::getArea()\n");
    return length * width;
  }

  virtual int sleep(){	//����������˯��
    return  printf("Bed::sleep()\n");
  }
protected:
  int length;	//�����Ա����
  int width;
};

//����ɳ�����Ķ��壬�������� Sofa ���� Bed����ͬ���� D 
class SofaBed : public Sofa, public Bed {
public:
  SofaBed()  { 
    printf("SofaBed::SofaBed()\n");
    height = 6;
  }
  virtual ~SofaBed(){	//ɳ�����������������
    printf("SofaBed::~SofaBed()\n");
  }

  virtual int sitDown(){	//ɳ������������Ϣ
    return printf("SofaBed::sitDown()\n");
  }

  virtual int sleep(){	//����������˯��
    return printf("SofaBed::sleep()\n");
  }

  virtual int getHeight() { 
    printf("SofaBed::getHeight()\n");
    return height;
  }
protected:
  int height;	//ɳ����ĳ�Ա����
};


int main(int argc, char* argv[]) {
  SofaBed sofabed;
  return 0;
}