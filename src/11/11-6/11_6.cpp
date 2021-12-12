#include <stdio.h>

class Global { 
public:
  Global() {	                       //�޲ι��캯��
    printf("Global\n");
  }
  Global(int n) {	               //�вι��캯��
    printf("Global(int n) %d\n", n);
  }
  Global(const char *s) {	       //�вι��캯��
    printf("Global(char *s) %s\n", s);
  }
  virtual ~Global()  {	               //����������
    printf("~Global()\n");
  }

  void show(){
    printf("Object Addr: 0x%p", this);
  }
};

Global g_global1;
Global g_global2(10);
Global g_global3("hello C++");


int main(int argc, char* argv[]) {
  g_global1.show(); 
  g_global2.show();
  g_global3.show();
  return 0;
}