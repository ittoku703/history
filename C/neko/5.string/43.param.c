//関数に配列を渡す
#include<stdio.h>

int showarray(int *);  //配列を代入するにはpointer

int main(void){
  int a[3] = {10, 20, 30};

  showarray(a);

  return 0;
}
int showarray(int x[]){  //int x[]でもok(同じ)!
  int i;
  for(i=0; i<3; i++){
    printf("x[%d] = %d\n", i, x[i]);
  }
  return 0;
}
