#include <stdio.h>

int main(int argc, char* argv[]) {
  int n1; 
  int n2;
  scanf("%d%d", &n1, &n2);
  static int ary[5] = {n1, n2, 0};	//�ֲ���̬�����ʼ���ڶ���Ϊ����
  return 0;
}