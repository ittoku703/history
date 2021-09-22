#include<stdio.h>
#include<string.h>
#include<time.h>
int main(){

int se, mi, ho, da, mo, ye;
int s, m, h, d, y;
int i, tmp;
int ju = 31, fe = 28, ma = 31, ap = 30, may = 31, june = 30;
int july = 31, au = 31, sep = 30, oc = 31, no = 30, de = 31;

m = 60;
h = 60 * 60;
d = 60 * 60 * 24;
y = 60 * 60 * 24 * 365;

for(i=1; i<=ye; ++i){
  if(i%4 == 0){
    if(i%100 == 0){
      if(i%400 == 0){
        fe += 1, da += 1;
      }
      fe -= 1; da -= 1;
    }
    fe += 1; da += 1;
  }
}
se = time(NULL) % 60;// 秒

mi = time(NULL) / m;
mi = mi % 60;// 分

ho = time(NULL) / h;
ho = ho % 24;// 時
ho += 9;//時差

da = time(NULL) / d;

mo = 0;

ye = time(NULL) / y;

printf("TIME関数 = %ld\n", time(NULL));
printf("現在 %4d/%2d/%2d %2d:%2d:%2d です\n", ye, mo, da, ho, mi, se);
//分の式
/*tmp = time(NULL) / m;
for(i=1; i<=tmp; ++i){
  m1 = tmp % m;
}*/

/*for(i=0; i<=time(NULL); ++i){
  m1 = time(NULL) / m;
  if(m1 == 60)
  m = 0;
}*/
//printf("%ld %ld %ld %ld %ld ", ye, da, ho, mi, time(NULL)\n);
  /*while(num!=0){
    reverse = num % 10;
    num /= 10;
    printf("%d", reverse);
  }
  printf("現在のtime %ld\n", time(NULL));

  for(i=0; i<=n; i++)
  printf("%s\n", moji[i]);
  for(i=1; i<=n; i++){
    printf("%d.文字列入力 = ", i);
    scanf("%s", moji[i]);
  }
  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      if(strcmp(moji[j-1], moji[j])>0){
        strcpy(tmp, moji[j-1]);
        strcpy(moji[j-1], moji[j]);
        strcpy(moji[j], tmp);
      }
    }
  }
  for(i=0; i<=strlen(moji); ++i){
    if(moji[i]>=97&&moji[i]<=122){
      moji[i]-=32;
    }
  }
  for(i=1; moji[i]!='\0'; ++i){
  }
  printf("%s の長さは%d です\n", moji, i);

  for(moji='a'; moji<='z'; ++moji){
    printf("%c ", moji);
  }  printf("\n");
  for(moji='A'; moji<='Z'; ++moji){
    printf("%c ", moji);
  }  printf("\n");
  for(moji='0' ;moji<='9'; ++moji){
    printf("%c ", moji);
  }  printf("\n");*/
  return 0;
}
