#include <stdio.h>

class AbstractBase  { 
  public:
  AbstractBase()  {
    printf("AbstractBase()");
  }
  virtual void show() = 0;	//���崿�麯��
};

class VirtualChild : public AbstractBase  {	//����̳г����������
public:
  virtual void show() {	//ʵ�ִ��麯��
    printf("���������\n");
  }
};

int main(int argc, char* argv[]) {
  VirtualChild obj;
  obj.show();
  return 0;
}
