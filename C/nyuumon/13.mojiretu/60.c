/*入力した複数の文字列をソート*/
#include<stdio.h>
#include<string.h>
int main(void){

  int i, j;
  int num = 3;
  char moji[3][100], tmp[100];

  printf("3つの文字列を入力\n");
  for(i=1; i<=num;i++){
    printf("%d.文字列入力 = ", i);
    scanf("%s", moji[i]);
  }
  for(i=1; i<=num; i++){
    for(j=1; j<=num; j++){
      if(strcmp(moji[j-1], moji[j])>0){
        strcpy(tmp, moji[j-1]);
        strcpy(moji[j-1], moji[j]);
        strcpy(moji[j], tmp);
      }
    }
  }
  printf("文字列をソートしました");
  for(i=0; i<=num;i++)
  printf("%s\n", moji[i]);

  return 0;
}
