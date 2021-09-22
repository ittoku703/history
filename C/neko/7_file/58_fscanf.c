#define RECORDLEN 33

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  FILE *fp;
  char fname[321], data[32], ans[8];
  int no;

  printf("ファイル名入力-->");
  fp = fopen(strcat(gets(fname), ".txt"), "r");

  if(fp == NULL){
    perror("fopen false!\n");
    return -1;
  }
  while(1){
    printf("何人めのデータを読み込みますか-->");
    gets(ans);
    no = atoi(ans);     //文字列を整数に変換
    fseek(fp, RECORDLEN * (no-1), SEEK_SET);
    if(fscanf(fp, "%s", data) == EOF){
      perror("読み込みエラーです\n");
      continue;
    }
    printf("氏名-->%s", data);
    fscanf(fp, "%s", data);
    printf("  電話番号-->%s\n", data);
    printf("続けますか(y/n)");
    gets(ans);
    if(strcmp(ans, "N") == 0||strcmp(ans, "n") == 0)
      break;
  }
  fclose(fp);
  return 0;
}
