/*typedefはデータ型の名前を!自由!に定義できる*/
#include<stdio.h>

typedef int SEISU;

int main(){
  SEISU n;

  for(n=0; n<10; n++)
  printf("%d", n);

  printf("\n");

  return 0;
}
/*例えば
typedef struct _tagData{
  int age;
  double bl;
  double bw;
} MYDATA, */
