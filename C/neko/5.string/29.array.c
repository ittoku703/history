#include<stdio.h>

int main(void){
  int a[3][2] = {10, 20, 30, 40, 50, 60};
  int i, j;

  /*各要素の値を確かめる*/
  for(i=0; i<3; i++){
    for(j=0; j<2; ++j){
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
  /*アドレスを調べる*/
  for(i=0; i<3; i++){
    for(j=0; j<2; j++){
      printf("&a[%d][%d] = %p\n", i, j, &a[i][j]);
    }
  }
  /*a[m][n]を*(*(a + m)+n)と書けるかを確かめる*/
  for(i=0; i<3; i++){
    for(j=0; j<2; j++){
      printf("*(*(a + %d) + %d) = %d\n", i, j, *(*(a+i)+j));
    }
  }

  return 0;
}
