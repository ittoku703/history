//スマートに書いた例
#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  char filename[321];
  char c;

  printf("ファイル名入力(拡張子不要)-->");
  fp = fopen(strcat(gets(filename), ".txt"), "r");

  if(fp == NULL){
    perror("file open false!!\n");
    return -1;
  }
  while((c = fgetc(fp)) != EOF)
    putc(c, stdout);

  //fclose(fp);
  return 0;
}
//________________________________
// %cで出力(こっちの方が確実)
/*#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  char filename[321];
  char c;

  printf("ファイル名入力-->");
  gets(filename);
  strcat(filename, ".txt");

  fp = fopen(filename, "r");
  if(fp == NULL){
    perror("fopen失敗\n");
    return -1;
  }

  while(fscanf(fp, "%c", &c) != EOF)
    printf("%c", c);     //1文字読んでは出力する

  fclose(fp);
  return 0;
}
*/
//________________________________
// %sで出力
/*
#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  char filename[326], name[32], tel[16], konma[2];
  char *format = "%-15s %-15s\n";

  printf("ファイル名入力(拡張子不要)-->");
  gets(filename);
  strcat(filename, ".txt");

  fp = fopen(filename, "r");     //読み出し用(既存のファイルを読み込む)

  if(fp == NULL){
    perror("ファイルオープン失敗\n");
    return -1;
  } else{
    printf("ファイルオープン成功\n");
  }     //konma(,)を処理
  while(fscanf(fp, "%s%s%s", name, konma, tel) != EOF)
    printf(format, name, tel);

  fclose(fp);
  return 0;
}
*/
