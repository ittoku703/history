#include<stdio.h>
#include<string.h>

int func(FILE *);

int main(void){
  FILE *fp;
  char fname[100];

  printf("ファイル名入力-->");
  fp = fopen(strcat(gets(fname), ".txt"), "a");
  if(fp == NULL){
    perror("失敗\n");
    return 0;
  }

  while(!func(fp));

  fclose(fp);
  return 0;
}

int func(FILE *f){
  char name[50], age[16], yesno[8];

  printf("氏名-->");
  gets(name);
  printf("年齢-->");
  gets(age);
  printf("さらに保存しますか(yes/no)");
  gets(yesno);

  fprintf(f, "%-15s %-15s\n", name, age);

  if(strcmp(yesno, "no") == 0||strcmp(yesno, "NO") == 0){
    printf("終了\n");
    return -1;
  }

  return 0;
}
