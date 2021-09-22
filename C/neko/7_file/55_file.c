/*test.txtというファイルが作られる*/
#include<stdio.h>

int main(void){

  FILE *fp;

  fp = fopen("test.txt", "w");

  if(fp == NULL){
    perror("ファイルオープンに失敗しました\n");
    return -1;
  } else {
    printf("ファイルオープンしました\n");
  }
  fprintf(fp, "初めてのファイル出力です\n");

  if(fclose(fp) != 0){
    printf("ファイルクローズに失敗しました\n");
  } else {
    printf("ファイルクローズしました\n");
  }
  return 0;
}
