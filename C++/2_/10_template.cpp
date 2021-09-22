#include<iostream>
using namespace std;

template <class T>
T maxt(T x, T y){
  if(x>y)
    return x;
  else
    return y;
}

int main(void){
  int a, b;
  double da, db;

  cout <<"2つの整数を入力: ";
  cin >> a >> b;
  cout <<"2つの少数を入力: ";
  cin >> da >> db;

  int ans1 = maxt(a, b);
  double ans2 = maxt(da, db);

  cout <<"整数の最大値は"<< ans1 <<"です\n";
  cout <<"少数の最大値は"<< ans2 <<"です\n";
  return 0;
}
