#include<iostream>
#include"13_myfunc.h"
using namespace std;

int main(void){
  int num1, num2, ans;

  cout <<"num1の値: ";  cin >> num1;
  cout <<"num2の値: ";  cin >> num2;

  ans = max(num1, num2);
  cout <<"最大値は"<< ans <<"です\n";

  return 0;
}
