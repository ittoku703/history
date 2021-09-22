#include<stdio.h>

int main(){

    /*変数の宣言*/
    int a;

    /*数値の入力*/
    printf("数値を入力してください= ");
    scanf("%d", &a);

    /*条件分岐*/
    if (a){
        //真の時の処理
        printf("真（true）だよ。\n");
        printf("%d\n", a);
    } else {
        //偽の時の処理
        printf("偽(false)だよ。\n");
        printf("%d\n", a);
    }
    return 0;
}
