#include <stdio.h>

//�ݹ麯�������ڼ��������ۼӣ�numΪ�ۼ�ֵ
int accumulation(int num) { 
  //��num����0ʱ���߼����������ߵ�ֵΪ�棬������ִ���������, �γɱ��ʽ��·���Ӷ��ҵ��ݹ����
  (num == 0) || (num += accumulation(num - 1)); 
  return num;
}

int main(int argc, char* argv[]) {
  accumulation(10);
  return 0;
}