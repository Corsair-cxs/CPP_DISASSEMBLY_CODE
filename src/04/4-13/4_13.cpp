#include <stdio.h>
int main(int argc, char* argv[]) {
  printf("%d", argc % 8);  //����ģ����������Ϊ2����
  printf("%d", argc % 9);  //����ģ����������Ϊ��2����
  return 0;
}