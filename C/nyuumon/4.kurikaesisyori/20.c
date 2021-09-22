#include<stdio.h>

int main(){

/*カウンタ変数の宣言*/
int i, j;

/*多階層の繰り返し処理*/
for (i=0;i<10;++i){
  for(j=0;j<10;++j){

    printf("%d %d\n", i, j);
  }
}
return 0;
}
