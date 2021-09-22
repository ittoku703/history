/*摂氏温度と華氏温度*/
#include<stdio.h>
int main(){
  int n;
  float celsius, fahrenheit;

  printf("摂氏温度は1, 華氏温度は2,を入力 = ");
  scanf("%d", &n);

  if(n != 1&& n!= 2)
  printf("もう一度やり直してください\n");

  if(n == 1){
    printf("摂氏温度入力 = ");
    scanf("%f", &celsius);

    fahrenheit = (1.8*celsius)+32;

    printf("華氏温度は %.1f です\n", fahrenheit);
  }

  if(n == 2){
    printf("華氏温度入力 = ");
    scanf("%f", &fahrenheit);

    celsius = 0.55*(fahrenheit-32);

    printf("摂氏温度は %.1f です\n", celsius);
  }

  return 0;
}
