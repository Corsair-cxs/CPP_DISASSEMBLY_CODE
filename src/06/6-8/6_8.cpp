#include <stdio.h>

int getAddr(int n){
  int ret = *(int*)(&n - 1);
  return ret;	//�����ص�ַ��Ϊ����ֵ����
}

int main(int argc, char* argv[]) {
  int ret = getAddr(1);
  return 0;
}