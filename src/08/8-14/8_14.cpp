#include <stdio.h>

int main(int argc, char* argv[]) {
  char ary[3][10] = {"Hello ","World ","!\n"}; 
  char (*p)[10] = ary;
  for (int i = 0; i < 3; i++) {
    printf(*p);					// ������ʾ��ά�����и�һά�����е��ַ�����Ϣ
    p++;
  }
  return 0;
}