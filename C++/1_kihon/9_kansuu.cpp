#include<iostream>
using namespace std;

void buy(int x = 10); //デフォルト引数

int main(void){
  cout <<"main関数のx: ";
  buy(100);
  cout <<"buy関数のx : ";
  buy();

  return 0;
}

void buy(int x){
  cout << x << "です\n";
}
