#include <stdio.h>

int main(){

    /*変数の宣言*/

    int a;

    /*数値の入力*/
    printf("数値を入力してください= ");
    scanf("%d", &a);

    /*条件分岐*/
    if (a)
        printf("%d\n", a);

    return 0;
}
