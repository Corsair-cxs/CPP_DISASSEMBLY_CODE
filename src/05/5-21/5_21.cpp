#include <stdio.h>
int main(int argc, char* argv[]) {
  int count = argc;
  int sum = 0;
  int i = 0;
 
GOTO_DO:              //���� goto �����תʹ�ñ��
  sum += i;	          //�˴�Ϊѭ�����飬����ÿ���ۼӺ�
  i++;	              //ָ��ѭ������Ϊÿ�ε��� 1
 
  if (i <= count) {  //�� nIndex ���� nCount������� goto ����
    goto GOTO_DO;
  }
  return sum;	       // ���ؽ��
}