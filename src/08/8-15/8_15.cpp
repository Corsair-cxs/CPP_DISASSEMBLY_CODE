#include <stdio.h>

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++){ //������һ�������в���	
    printf(argv[i]);	          //��ȡ�����в�����Ϣ
  }
  return 0;
}