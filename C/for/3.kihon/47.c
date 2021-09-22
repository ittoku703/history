/*問2(7-4)*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void){
  char str[100];
  int i, dot=0, err;
  double d;
  long l;

  printf("数値入力 = ");
  scanf("%s", str);

  if(str[0] == '+'||str[0] == '-'||isdigit(str[i]) != 0){
    err = 0;
  }
  else if(str[0] == '.'){
    err = 0;
    dot++;
  }
  else
  err = 1;

  i = 1;
  while(err == 0&&str[i] != '\0'){
    if(str[i] == '.'){
      dot++;
    }
    else if(isdigit(str[i]) == 0){
      err++;
    }
    i++;
  }

  if(err == 0){
    if(dot == 0){
      l = atol(str);
      printf("整数値入力 = %ld\n", l);
    }
    else if(dot == 1){
      d = atof(str);
      printf("浮動小数点入力 = %lf\n", d);
    }
    else
    printf("入力エラー\n");

  }
  else
  printf("入力エラー\n");

  return 0;
}
