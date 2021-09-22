/*最高点と最低点*/
#include<stdio.h>
int main(void){
  int num[5];
  int max, min, i;

  printf("五教科の点数を入力\n");
  printf("国語 = ");
  scanf("%d", &num[0]);
  printf("数学 = ");
  scanf("%d", &num[1]);
  printf("英語 = ");
  scanf("%d", &num[2]);
  printf("理科 = ");
  scanf("%d", &num[3]);
  printf("社会 = ");
  scanf("%d", &num[4]);

  max = num[0];
  min = num[0];
  for(i=0; i<=4; ++i){
    if(max<num[i])
    max = num[i];
    if(min>num[i])
    min = num[i];
  }
  printf("最高点は %d ,最低点は %d でした\\(^o^)/\n", max, min);
  return 0;
}
