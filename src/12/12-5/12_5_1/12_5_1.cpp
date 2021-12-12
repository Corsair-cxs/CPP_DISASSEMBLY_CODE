#include <stdio.h>

class  Person{  //���ࡪ����
public:
  Person() {
    showSpeak();  //ע�⣬���캯���������麯��
  }
  virtual ~Person(){
    showSpeak();  //ע�⣬���������������麯��
  }
  virtual void showSpeak(){  
    //�����������������������麯��getClassName();
    printf("%s::showSpeak()\n", getClassName());
    return;
  }
  virtual const char* getClassName()
  {
    return "Person";
  }
};

class Chinese : public Person  {  //�й��ˣ��̳��� " �� " ��
public:
  Chinese()  { 
    showSpeak();
  }
  virtual ~Chinese()  {
    showSpeak();
  }
  virtual const char* getClassName()  {
     return "Chinese";
  }
};

int main(int argc, char* argv[])  { 
  Person *p = new Chinese; 
  p->showSpeak();
  delete p;
  return 0;
}
