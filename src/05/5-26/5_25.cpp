#include <stdio.h>
int main(int argc, char* argv[]) {
  int sum = 0;
  int i = 0; 
  do {
    sum += i; 
    i++;
  } 
  // �˴�����ÿ�ζ�Ҫ�ж� argc �C argc ��û���Լ�����ȻΪһ���̶�ֵ
  // ����ѭ�������ȶ� argc ���м����� 1 �������ٽ���ѭ����
  while(i < argc - 1); 
  return sum;
}