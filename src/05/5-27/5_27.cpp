#include <stdio.h>
int main(int argc, char* argv[]) {
  int t = 0;
  int i = 0;
  while (t < argc)  {
    t = i * 99;	      //ǿ�����������ｫ����ʹ�ó˷�����
    i++;	            //�˴�ת����Ϊ t = i; i += 99;
  }	                  //���üӷ������滻����ָ�����ڳ��ĳ˷�����
  printf("%d", t); 
  return 0;
}