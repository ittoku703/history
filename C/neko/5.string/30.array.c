#define NO 3 //生徒の数
#include<stdio.h>

int main(){
          //英語と数学          //3 * 2
  int point[][2] = {80, 80, 100, 98, 60, 80};
  int i, j, sum = 0, p_sum[NO];//NO = 3
  double ave;
  /*英語の平均点を求める*/
  for(i=0; i<NO; i++)
    sum += point[i][0];
  ave = (double)sum / NO;

  printf("英語の平均点は %5.1f でした\n", ave);
  sum = 0;
  /*数学の平均点を求める*/
  for(i=0; i<NO; i++)
    sum += point[i][1];
  ave = (double)sum / NO;

  printf("数学の平均点は %5.1f でした\n", ave);
  /*個人別合計点を求める*/
  for(i=0; i<NO; i++){
    for(j=0; j<2; j++){
      p_sum[i] += point[i][j];
    }
    printf("出席番号 %d の総得点は %d でした\n", i+1, p_sum[i]);
  }
  return 0;
}
