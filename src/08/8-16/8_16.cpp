#include <stdio.h>

void  _cdecl show() {			//��������
  printf("show\n");
}

int main(int argc, char* argv[]) {
  void (_cdecl *pfn)(void) = show;	//����ָ�븳ֵ
  pfn();				//ʹ�ú���ָ����ú���
  show();				//ֱ�ӵ��ú���
  return 0;
}