#define LEN 32
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  FILE *fp;
  char fname[100], data[32], ans[8];
  int no;

  printf("ファイル名-->");
  fp = fopen(strcat(gets(fname), ".txt"), "r");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }
  while(1){
    printf("何人めのデータを読み込みますか-->");
    gets(ans);
    no = atoi(ans);
    fseek(fp, LEN * (no - 1), SEEK_SET);

    if(fscanf(fp, "%s", data) == EOF){
      printf("読み込みエラーです\n");
      continue;
      }
    printf("[名前]: %s", data);
    fscanf(fp, "%s", data);
    printf("[年齢]: %s\n", data);

    printf("さらにデータを読み込みますか(yes/no): ");
    gets(ans);
    if(strcmp(ans, "no") == 0||strcmp(ans, "NO") == 0)
      break;
  }

  fclose(fp);
  return 0;
}
