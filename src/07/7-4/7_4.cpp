#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char * buffer1 = (char*)malloc(10);	// ����ѿռ�
  char * buffer2 = new char[10];	// ����ѿռ�

  if (buffer2 != NULL){
	  delete[] buffer2; // �ͷŶѿռ�
	buffer2 = NULL;
  }
  if (buffer1 != NULL){
	free(buffer1);	// �ͷŶѿռ�
	buffer1 = NULL;
  }

  return 0;
}