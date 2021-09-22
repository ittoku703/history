#include<stdio.h>

int main()
{
    /*整数（文字）型*/
    char var;
    var = 'A';
    printf("はじめまして %c です。\n", var);

    /*整数*/
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    printf("%d %d %d %dです。\n",a, a+b, c, c+c+c+c);

    /*浮動小数点型（単精度実数）*/
    float x;
    x = 33.333;
    printf("%.3f\n", x);

    return 0;
}
