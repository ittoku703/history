#define PAI 3.141592653589793

#include<stdio.h>
#include<stdlib.h>

int main(void){
  double sankaku();
  double daikei();
  double en();

  double (*fn[3])() = {sankaku, daikei, en};
  char ret[8];
  int fnno;

  printf("どの面積を求めますか\n");
  while(1){
    printf("(1: 三角 2: 台形 3: 円 0:終了)-->");
    gets(ret);
    if(ret[0] > '3' || ret[0] < '0'){
      printf("番号が間違ってます\n");
      continue;
    }
    fnno = atoi(ret);
    if(fnno == 0)
      break;
    printf("面積は %f です\n", (*fn[fnno - 1])());
  }
  return 0;
}

double sankaku(double ans){
  double teihen, takasa;

  printf("底辺-->");
  scanf("%lf", &teihen);
  printf("高さ-->");
  scanf("%lf", &takasa);

  return teihen * takasa / 2.0;
}

double daikei(){
  double jotei, katei, takasa;

  printf("上底-->");
  scanf("%lf", &jotei);
  printf("下底-->");
  scanf("%lf", &katei);
  printf("高さ-->");
  scanf("%lf", &takasa);

  return (jotei + katei) * takasa / 2.0;
}

double en(){
  double hankei;

  printf("半径-->");
  scanf("%lf", &hankei);

  return hankei * hankei * PAI;
}
