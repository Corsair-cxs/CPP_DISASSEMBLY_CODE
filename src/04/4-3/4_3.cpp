#include <stdio.h>
int main(int argc, char* argv[]) {
  int n1 = argc;
  int n2 = argc;

  printf("n1 * 15 = %d\n", n1 * 15);       //�����˳��� ( ����ֵΪ�� 2 ���� )
  printf("n1 * 16 = %d\n", n1 * 16);       //�����˳��� ( ����ֵΪ 2 ���� )
  printf("2 * 2 = %d\n", 2 * 2);           //���������
  printf("n2 * 4 + 5 = %d\n", n2 * 4 + 5); //�������
  printf("n1 * n2 = %d\n", n1 * n2);       //���������
  return 0;
}