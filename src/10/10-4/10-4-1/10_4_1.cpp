#include <stdio.h>
#include <string.h>

class Person {
public:
  Person() {
    name = NULL;//�޲ι��캯������ʼ��ָ��
  }
  Person(const Person& obj) {
    // ע������ڿ������캯����ֱ�Ӹ���ָ��ֵ����ô�����ڵ�������Աָ���ָ��ͬһ����Դ��������ǳ����
    // this->name = obj.name;
    // Ϊʵ�ζ����е�ָ����ָ��Ķѿռ�����һ�ݸ���������������
    int len = strlen(obj.name);
    this->name = new char[len + sizeof(char)]; // Ϊ�˱��ڽ��⣬����û�м��ָ��
    strcpy(this->name, obj.name);
  }
  ~Person(){					// �����������ͷ���Դ
    if (name != NULL) {
      //���ʹ��ǳ������ִ�е���������������ΪԴ����͸��ƵĶ��������������ʱ����õ��˴������Ի����ͬһ����Դ�ͷ����εĴ���
      delete[] name;		
      name = NULL;
    }
  }


  void setName(const char* name) {
    int len = strlen(name);
    if (this->name != NULL) {
      delete [] this->name; 
    }
    this->name = new char[len + sizeof(char)]; // Ϊ�˱��ڽ��⣬����û�м��ָ��
    strcpy(this->name, name);
  }
public:
  char * name;
};

//�����ķ���������������Ͷ��Ƕ����ָ������
Person* getObject(Person* p) {	
  Person person;		// ����ֲ�����
  person.setName("World");
  p = &person;
  return p;           
}

int main(int argc, char* argv[]) {
  Person person;
  getObject(&person);
  return 0;
}