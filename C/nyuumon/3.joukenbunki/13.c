#include <stdio.h>

int main(void){

    /*変数の宣言*/
    int a;

    /*数値の入力*/
    printf("数値を入力してください　=");
    scanf("%d", &a);

    /*条件分岐*/
    if (a >= 5){
        printf("真(ture)だよ。\n");
    } else {
        //偽の時の処理
        printf("偽(false)だよ。\n");
    }

    return 0;
}
