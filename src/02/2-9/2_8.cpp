#include <stdio.h>
#define NUMBER_ONE  1  //���� NUMBER_ONE Ϊ���� 1 
int main(int argc, char* argv[]) {
  const int n = NUMBER_ONE;                              //������ NUMBER_ONE ��ֵ�� const ���� n 
  printf("const = %d #define = %d \r\n", n, NUMBER_ONE); //��ʾ���߽��
  return 0;
}