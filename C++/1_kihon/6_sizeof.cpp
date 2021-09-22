#include<iostream>
using namespace std;

int main(void){
  int a = 1, b = 0;

  cout << "short int 型のサイズは " << sizeof(short int)
    << " バイトです\n";
  cout << "int 型のサイズは " << sizeof(int)
    << " バイトです\n";
  cout << "long int 型のサイズは " << sizeof(long int)
    << " バイトです\n";
  cout << "float 型のサイズは " << sizeof(float)
    << " バイトです\n";
  cout << "double 型のサイズは " << sizeof(double)
    << " バイトです\n";
  cout << "long double 型のサイズは " << sizeof(long double)
    << " バイトです\n";
  cout << "変数a のサイズは " << sizeof(a)
    << " バイトです\n";
  cout << "式 a + b のサイズは " << sizeof(a+b)
    << " バイトです\n";
  return 0;
}
