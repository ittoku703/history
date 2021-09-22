/*問2(6-5-1)*/
#include<stdio.h>
int main(void){
  int n;

  printf("input number(1-10) = ");
  scanf("%d", &n);

  switch(n){
    case 1: printf("1:one\n");
    break;
    case 2: printf("2:two\n");
    break;
    case 3: printf("3:three\n");
    break;
    case 4: printf("4:four\n");
    break;
    case 5: printf("5:five\n");
    break;
    case 6: printf("6:six\n");
    break;
    case 7: printf("7:seven\n");
    break;
    case 8: printf("8:eight\n");
    break;
    case 9: printf("9:nine\n");
    break;
    case 10: printf("10:ten\n");
    break;
    default: printf("number input err\n");
    break;
  }
  return 0;
}
