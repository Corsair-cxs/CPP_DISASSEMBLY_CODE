#include <stdio.h>
#include <string.h>

void show(char buffer[])  {	    //����Ϊ�ַ���������
  strcpy(buffer, "Hello World");    //�ַ�������    
  printf(buffer);                   
}

int main(int argc, char* argv[]) {
  char buffer[20] = {0};	     //�ַ����鶨��
  show(buffer);	                     //��������Ϊ��������
  return 0;
}