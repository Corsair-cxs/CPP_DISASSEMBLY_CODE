#include <stdio.h>
int main(int argc, char* argv[]) {
  if (argc == 0) {
    argc = 5;	//�ȼ��������ʽ�еı��ʽ 2
  } else {
    argc = 6;	//�ȼ��������ʽ�еı��ʽ 3
  }

  printf("%d\n", argc);//��ֹ�������Ż�����
  return 0;
}