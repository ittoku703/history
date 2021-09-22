#include<stdio.h>

int main(int argc, char *argv[]) {

  int i;

  if(argc == 1){
    printf("コマンドライン引数がありません\n");
    return -1;
  }
  for(i=0; i<argc; i++){
    printf("argc[%d]は[%s]です\n", i, argv[i]);
  }
  return 0;
}
/*コマンドプロンプトで./a.out のあとに入力すると
argv[] に格納される
Yamamoto-no-Air:a.out yamamotokazunori$ a.out42 1 2 3*/
