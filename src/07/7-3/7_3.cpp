#include <stdio.h>

void showStatic(int n){
  static int g_static = n;	    //����ֲ���̬��������ֵΪ����
  printf("%d\n", g_static);        //��ʾ��̬����
}

int main(int argc, char* argv[]) {
  for (int i = 0; i < 5; i++) {
    showStatic(i); //ѭ��������ʾ�ֲ���̬�����ĺ�����ÿ�δ��벻ֵͬ
  }
  return 0;
}