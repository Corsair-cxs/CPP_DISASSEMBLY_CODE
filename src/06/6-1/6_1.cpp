#include <stdio.h>

void _stdcall show1(int n){	//ʹ�� _stdcall ���÷�ʽ��������ƽ��ջ
  printf("%d\n", n);
}

void _cdecl show2(int n){   //ʹ�� _cdecl ���÷�ʽ�����÷�ƽ��ջ
  printf("%d\n", n);
}


int main(int argc, char* argv[]) {
  show1(5);	//������ƽ��ջ����
  show2(5);	//�������ý����󣬶� esp ƽ�� 4
  return 0;
}