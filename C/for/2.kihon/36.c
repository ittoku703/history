/*問1(6-6-1)*/
#include<stdio.h>
int main(void){
  int a, b, i;
  int c[51];

  printf("a.整数値入力 = ");
  scanf("%d", &a);
  printf("b.整数値入力 = ");
  scanf("%d", &b);

  switch (b) {
    case 0: printf("処理終了\n");
    break;
  }

  printf("%d / %d = ", a, b);

  c[0] = a / b;
  printf("%d.", c[0]);

  for(i=1; i<=51; i++){
    c[i] = a % b;
    a = c[i] * 10;
    c[i] = a / b;
    if(c[i] != 0){
      printf("%d", c[i]);
    }
  }
  printf("\n");

  return 0;
}
