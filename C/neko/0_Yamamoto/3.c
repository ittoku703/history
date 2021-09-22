#define STUDENT 5
#define SUBJECT 2
#include<stdio.h>

int func();

typedef struct MAN {
  char name[32];
  int kokugo;
  int rika;
} DATA;

int main(){
  DATA data[STUDENT] = {
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
  data[no].name, data[no].kokugo, data[no].rika);

  for(i=0; i<=STUDENT; i++)
  sum += data[i].kokugo;
  kokugo = (double)sum / STUDENT;
  sum = 0;
  for(i=0; i<=STUDENT; i++)
  sum += data[i].rika;
  rika = (double)sum / STUDENT;

  printf("\nちなみに平均点は国語 %.1lf点 理科 %.1lf点 でしたぁ\n", kokugo, rika);

  return 0;
}
