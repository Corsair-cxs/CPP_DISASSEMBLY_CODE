#include <stdio.h>
#include <string.h>

class Person {
public:
  Person() {
    name = new char[32];  //����ѿռ䣬ֻҪ���ͷţ������˳�ǰ��һֱ����
    if (name != NULL) {   //�ѿռ�����ɹ����
       strcpy(name, "tom");
    }
  }
  ~Person() {
    if (name != NULL) {  //�����Դ
      delete[] name;     //�ͷŶѿռ�
      name = NULL;
    }
  }

  const char* getName() {
    return name;        //��ȡ���ݳ�Ա
  }
private:
  char *name;          //���ݳ�Ա���壬����ѵ��׵�ַ
};

//����ΪPerson�����ĺ���
void show(Person obj)  {
  printf(obj.getName());
}

int main(int argc, char* argv[]) {
  Person person;  //�������
  show(person);
  return 0;
}