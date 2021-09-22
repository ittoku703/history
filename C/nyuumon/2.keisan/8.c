#include<stdio.h>

int main(void){

    /*整数型*/
    int a, b;

    /*変数に値を格納*/
    a =1;
    b =2;

    /*足して代入*/
    a += b; //1+2
    printf("a = %d\n", a);

    /*引いて代入*/
    a -= b; //3-2
    printf("a = %d\n", a);

    /*不動小数点型*/
    float x, y;

    /*変数に値を格納*/
    x =3.3;
    y =5.4;

    /*掛けて代入*/
    x *= y; //3.3*5.4
    printf("x = %.2f\n", x);

    /*割って代入*/
    x /= y; //17.82/5.4
    printf("x = %.1f\n", x);

    return 0;
}
