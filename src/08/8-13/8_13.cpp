#include <stdio.h>

int main(int argc, char* argv[]) {
  char * ary[3] = {"Hello ", "World ", "!\n"};	//�ַ���ָ�����鶨��	
  for (int i = 0; i < 3; i++)	{	
    printf(ary[i]);				//��ʾ����ַ��������и���
  }
  return 0;
}