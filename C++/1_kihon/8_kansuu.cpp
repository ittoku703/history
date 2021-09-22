#include <iostream>
using namespace std;

inline int max(int x, int y){if(x>y) return x; else return y;} //インライン関数

int main(void){
  int num1, num2, ans;

  cout <<"1 番目の整数を入力してください: ";
  cin >> num1;
  cout <<"2 番目の整数を入力してください: ";
  cin >> num2;

  ans = max(num1, num2);

  cout <<"最大値は"<< ans <<" です\n";

  return 0;
}
