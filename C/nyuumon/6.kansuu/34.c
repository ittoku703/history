#include<stdio.h>

/*プロトタイプ宣言*/
void hello(void);
int tasu(int, int);

int main(void){

  int a, b;
  a = 1;
  b = 3;

  /*hello関数の呼び出し*/
  hello();

  /*tasu関数の呼び出し*/
  printf("%d\n", tasu(a,b));

  return 0;
}

/*tasu関数*/
int tasu(int a, int b){
  return a + b;
}

/*hello関数*/
void hello(void){
  printf("Hello World!\n");
}
