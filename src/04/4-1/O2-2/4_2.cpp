#include <stdio.h>
int main(int argc, char* argv[]) {
  int n1 = argc;	// �޸Ĵ�
  int n2 = argc;	// �޸Ĵ�

  n1 = n1 + 1; 
  n1 = 1 + 2;
  n1 = n1 + n2;
  printf("n1 = %d\n", n1);
  return 0;
}
