#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0; 
  int j = 0;
  int ary1[4] = {1, 2, 3, 4};		//һά����
  int ary2[2][2] = {{1, 2},{3, 4}};	//��ά����
  scanf("%d %d", &i, &j); 
  printf("ary1 = %d\n", ary1[i]);
  printf("ary2 = %d\n", ary2[i][j]);
  return 0;
}