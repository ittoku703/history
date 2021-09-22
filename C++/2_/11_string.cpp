#include<iostream>
#include<cstring>
using namespace std;

int main(void){
  char str0[32], str1[32], str2[32];

  cout <<"文字列の長さを測定\n文字列入力: ";
  cin >> str0;
  cout << str0 <<"の長さは"<<strlen(str0)<<"でした\n";

  cout <<"文字列と文字列をコピー\n文字列入力: ";
  cin >> str1 >> str2;
  cout <<"連結すると"<<strcat(str1, str2)<<"になりました\n";
}
