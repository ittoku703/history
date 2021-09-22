/*問1(6-1-3)*/
#include<stdio.h>
int main(void){
  char kamoku;
  int ten = 0;

  printf("科目入力(k:国語, s:数学) >");
  scanf("%c", &kamoku);
  printf("点数入力 = ");
  scanf("%d", &ten);

  if(kamoku == 'k'){
    if(ten > 73&&ten <= 100)
    printf("国語の点数は平均以上です\n");
    else if(ten < 73&&ten >= 0)
    printf("国語の点数は平均以下です\n");
    else
    printf("入力ミスです\n");
  }
  else if(kamoku == 's'){
    if(ten >= 61&&ten <= 100)
    printf("数学の点数は平均以上です\n");
    else if(ten <= 61&&ten >= 0)
    printf("数学の点数は平均以下です\n");
    else
    printf("入力ミスです\n");
  }
  else
  printf("入力ミスです\n");

  return 0;
}
