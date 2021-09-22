#define FNAME "meibo.txt"
#define RECORDLEN 59

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu();     //説明
int myread();     //"r"
int mywrite();     //"a"
int myrewrite();     //"r+"

char *format = "%-20s %-3d %-2s %-30s\n";

int main(void){
  int menuno;

  printf("***************************************\n");
  printf("1.データ読み込み(新規・追加)\n");
  printf("2.データ読み出し\n");
  printf("3.データ修正\n");
  printf("0.終了\n");
  printf("***************************************\n");
  while(1){
    menuno = menu();
    switch (menuno) {
      case 0:  break;
      case 1:  mywrite();  break;
      case 2:  myread();  break;
      case 3:  myrewrite();  break;
      default:  printf("不正です\n");  break;
    }
    if(!menuno)
      break;
  }
  return 0;
}

int menu(){
  char ret[8];

  while(1){
    printf("選択-->");
    gets(ret);
    if(ret[0] < '0'||ret[0] > '3'){
      printf("入力が不正です\n");
      continue;
    }
    return atoi(ret);
  }
}

int mywrite(){
  FILE *fp;
  char name[32], sex[4], address[32], buffer[8];
  int age;
  fp = fopen(FNAME, "a");

  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }

  while(1){
    printf("氏名(Romaji)-->");
    gets(name);
    printf("年齢-->");
    gets(buffer);
    age = atoi(buffer);
    printf("性別(M/F)-->");
    gets(sex);
    printf("住所-->");
    gets(address);

    if(fprintf(fp, format, name, age, sex, address) < 0){
      perror("書き込みエラーが発生しました\n");
      break;
    }

    printf("さらに入力を続けますか(yes/no): ");
    gets(buffer);
    if(buffer[0] == 'n' || buffer[0] == 'N')
      break;
  }
  fclose(fp);
  return 0;
}

int myread(){
  FILE *fp;
  char search[32], yesno[8], name[32], sex[4], address[32];
  int no = 0, find = 0, age;

  fp = fopen(FNAME, "r");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }

  printf("検索する氏名-->");
  gets(search);
  while(1){
    fseek(fp, RECORDLEN * no++, SEEK_SET);
    if(fscanf(fp, "%s", name) == EOF)
      break;
    if(strstr(search, name) != NULL){     //文字列の検索
      find++;
      fscanf(fp, "%d", &age);
      fscanf(fp, "%s", sex);
      fscanf(fp, "%s", address);
      printf("[氏名]: %s  ", name);
      printf("[年齢]: %d\n", age);
      printf("[性別]: %s  ", sex);
      printf("[住所]: %s\n", address);
      printf("---------------------------------------------\n");
    }
  }
  printf("%d 件が検索されました\n", find);
  fclose(fp);
  return 0;
}

int myrewrite(){
  FILE *fp;
  char buffer[8], shusei[16], yesno[8],
       name[32], sex[8], address[32];
  int no = 0, find = 0, age;
  fp = fopen(FNAME, "r+");

  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }

  printf("修正するデータの氏名-->");
  gets(shusei);
  while(1){
    fseek(fp, RECORDLEN * no++, SEEK_SET);
    if(fscanf(fp, "%s", name) == EOF)
      break;
    if(strstr(shusei, name) != NULL){
      find = 1;
      fscanf(fp, "%d", &age);
      fscanf(fp, "%s", sex);
      fscanf(fp, "%s", address);
      printf("[氏名]: %s  ", name);
      printf("[年齢]: %d\n", age);
      printf("[性別]: %s  ", sex);
      printf("[住所]: %s\n", address);
      printf("---------------------------------------------\n");
      printf("氏名-->");
      gets(name);
      printf("年齢-->");
      gets(buffer);
      age = atoi(buffer);
      printf("性別-->");
      gets(sex);
      printf("住所-->");
      gets(address);
      fseek(fp, RECORDLEN * no++, SEEK_SET);
      fprintf(fp, format, name, age, sex, address);
    }
  }
  if(find == 0)
    printf("修正するデータが見つかりません\n");

  fclose(fp);
  return 0;
}
