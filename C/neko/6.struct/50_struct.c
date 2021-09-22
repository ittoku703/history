#include<stdio.h>

struct Data {     //プロトタイプ宣言
  char name[32];
  int age;
  double bl;
  double bw;
  double bmi;
};

int struct_input(struct Data *);     //ポインタは構造体メンバにアクセスするのに必要

int main(void){
  struct Data Mydata;     //struct DATA をMydataとする
  char format[] = "%sさん(%d歳)のプロフィール\n"     //formatに文字列を格納
  "身長 = %5.lfcm, 体重 = %5.lfkg, BMI = %4.lf\n";
  char buffer[256];     //formatの箱

  struct_input(&Mydata);     //関数の呼び出し
  
  sprintf(buffer, format, Mydata.name, Mydata.age,
  Mydata.bl, Mydata.bw, Mydata.bmi);
  printf("%s", buffer);
  return 0;
}

int struct_input(struct Data *p){     //情報を入力
  printf("氏名---");
  gets(p->name);
  printf("年齢---");
  scanf("%d", &p->age);
  printf("身長---");
  scanf("%lf", &p->bl);
  printf("体重---");
  scanf("%lf", &p->bw);
  p->bmi = p->bw * 10000.0 / (p->bw * p->bl);

  return 0;
}
