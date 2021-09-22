#include <stdio.h>

int main(){

    /*数値の宣言*/
    int a;

    /*数値の入力*/
    printf("数値を入力してください = ");
    scanf("%d", &a);

    /*条件分岐*/
    if (a == 5)
        printf("入力した数値は 5 です。\n");
    else if(a > 5)
        printf("入力した数値は　5 より大きいです。\n");

    else
        printf("入力した数値は 5 より小さいです。\n");

    return 0;
}
