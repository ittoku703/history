#include <stdio.h>

char name[32];
int age;

void Input(){
  printf("名前を入力: ");
  gets(name);
  printf("年齢を入力: ");
  scanf("%d", &age);
}

void Output(){
  printf("名前は　%s  年齢は　%d 才です\n", name, age);
}

int main(){
  Input();
  Output();
  return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
  char str[100];
  double d;

  printf("数値入力 = ");
  gets(str);
  d = atof(str);
  printf("%lf\n", d);
  return 0;
}
*/
/*
#include<stdio.h>

int main(void){
  char *format = "%-15s, %-15s";
  char num1[32], num2[32];
  gets(num1);
  gets(num2);

  printf(format, num1, num2);
  printf("\n");
  return 0;
}
*/
/*
#include<stdio.h>

int main(void){
  FILE *fp;

  fp = fopen("test.txt", "w");

  if(fp == NULL){
    perror("open失敗\n");
    return -1;
  } else{
    printf("open成功\n");
  }

  if(fclose(fp) != 0)
    perror("close失敗\n");
  else
    printf("close成功\n");

  return 0;
}
*/
/*
#define STUDENT 5
#define SUBJECT 2
#include<stdio.h>

int func();

struct MAN {
  char name[32];
  int kokugo;
  int rika;
} ;

int main(){
  struct MAN student[STUDENT] = {
    "やまちゃん", 55, 90,
    "ぼーちゃん", 70, 100,
    "ああああ", 60, 90,
    "うさうさ", 80, 80,
    "あっかうそ", 60, 80
  };
  int no, i, sum;
  double kokugo, rika;

  printf("誰の点数を見ますか？(0-やま, 1-ぼー, 2-あ, 3-うさ, 4-あっ)-->");
  scanf("%d", &no);
  printf("%s の点数は国語 %d 数学 %d です\n",
  student[no].name, student[no].kokugo, student[no].rika);

  for(i=0; i<=STUDENT; i++)
  sum += student[i].kokugo;
  kokugo = (double)sum / STUDENT;
  sum = 0;
  for(i=0; i<=STUDENT; i++)
  sum += student[i].rika;
  rika = (double)sum / STUDENT;

  printf("\nちなみに平均点は国語 %.1lf点 理科 %.1lf点 でしたぁ\n", kokugo, rika);

  return 0;
}
*/
/*
#include<stdio.h>

void hanten(char *);

int main(int argc, char* argv[]){
  char *s = argv[1];

  if(argc <= 1){return 0; }

  printf("Input: %s\n", s);
  hanten(s);                 //ここで関数呼び出し
  printf("Output: %s\n", s);
  return 0;
}

void hanten(char s[]){
  char temp = '\0';        //反転に必要
  char *first = s;
  char *last = s;

  if(*first == '\0'){return; }

  while(*(last+1) != '\0'){last++; }//ここで文字列最後のポインタを取得

  while(first < last){　　　//ここで反転
    temp = *first;
    *first = *last;
    *last = temp;
    first++;
    last--;
  }
  return;
}
*/
/*
#include<stdio.h>
#define NO 20

int func1(int *);  //平均点

int main(void){
  int n, a[NO] = {    //生徒の点数
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
  func1(a);

  printf("受験番号入力-->");
  scanf("%d", &n);
  printf("受験番号 %d さんの点数は %d です\n", n, a[n-1]);
  return 0;
}

int func1(int tensuu[]){
  int sum = 0, ave, i;
  for(i=0; i<NO; i++){
    sum += tensuu[i];
  }
  ave = sum / NO;
  printf("テストの平均点は %d です\n", ave);
  return 0;
}
*/
/*
#include<stdio.h>

int func(char);

int main(void){
  char c;
  printf("文字入力-->");
  scanf("%c", &c);
  func(c);
  return 0;
}
int func(char ch){
  if((ch >='a'&&ch <= 'z')||(ch >= 'A'&&ch <= 'Z'))
  printf("%c はアルファベットです\n", ch);
  else
  printf("%c はアルファベットじゃなーい\n", ch);

  return 0;
}
*/
/*ふぃぼなっち
#include<stdio.h>

int func();

int main(void){
  int i;
  for(i=1; i<=30; ++i){
    printf("フィボナッチ数 %2d 数列 = %-7d\n", i, func(i));
  }
}
int func(int n){
  if(n == 0||n == 1)
  return 1;
  else
  return func(n-1)+func(n-2);
}
*/
/*
#include<stdio.h>

int func();
static int kaijou;

int main(void){
  int i;
  for(i=1; i<=10; i++){
    printf("%d! = %d\n", i, func(i));
  }
  return 0;
}
int func(int x){
  if(x == 0)
  return 1;
  else
  return x * func(x-1);
}
*/
/*
#include<stdio.h>

float func(float);
int hankei, menseki;

int main(void){
  printf("円の半径入力-->");
  scanf("%d", &hankei);
  printf("半径 = %d\n面積 = %.2f\n", hankei, func(menseki));
  return 0;
}
float func(float x){
  float pai = 3.14;
  x = (hankei * hankei) * pai;
  return x;
}
*/
/*
#include<stdio.h>
int main(void){
  float kg, m;
  float average = 0, bmi = 0;

  printf("体重入力->");
  scanf("%f", &kg);
  printf("身長入力->");
  scanf("%f", &m);

  bmi = kg / (m * m);
  average = 22 * (m * m);

  printf("あなたのBMIは %.2f です\n", bmi);
  printf("理想の体重は %.2f ですけどwwww\n\n", average);
}
*/
/*
#include<stdio.h>
int main(void){
  int big = 0, small = 100, average = 0;
  int i, n, tensu;

  printf("受験者数-->");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    printf("点数(1~100)-->");
    scanf("%d", &tensu);
    average += tensu;
    if(tensu == -1)
    break;
    if(big < tensu)
    big = tensu;
    if(small > tensu)
    small = tensu;
  }
  average /= n;

  printf("最高点: %3d 最低点 %3d 受験者数 %3d 平均点 %3d\n",
          big, small, n, average);

  return 0;
}
*/
