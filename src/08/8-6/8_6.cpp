#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  char buffer[20] = {0};      //�ַ����鶨��
  strcpy(buffer, argv[0]);    //�ַ������� 
  printf(buffer);  
  return 0;
}