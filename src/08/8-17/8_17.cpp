#include <stdio.h>

int _stdcall show(int n) {		//��������
  printf("show : %d\n", n); 
  return n;
}

int main(int argc, char* argv[]) {
  int (_stdcall *pfn)(int) = show;	//����ָ�붨�岢��ʼ��
  int ret = pfn(5);			//ʹ�ú���ָ����ú���������ȡ����ֵ
  printf("ret = %d\n", ret);
  return 0;
}