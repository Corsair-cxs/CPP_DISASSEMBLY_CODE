#include <stdio.h>

int main(int argc, char* argv[]) {
  argc = argc << 3;         //������ argc ���� 3 λ
  argc = argc >> 5;         //������ argc ���� 5 λ
  argc = argc | 0xFFFF0000; //������ argc �� 0xFFFF0000 ��λ������
  argc = argc & 0x0000FFFF; //������ argc �� 0x0000FFFF ��λ������
  argc = argc ^ 0xFFFF0000; //������ argc �� 0x FFFF0000 ���������
  argc = ~argc;             //�Ա��� argc ��λȡ��
  return argc;              //�� �� argc
}
