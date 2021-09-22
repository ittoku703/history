
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;

class Kojima {
private:
  string name;
  int age;
public:
  Kojima(string str, int a){
    name = str;
    age = a;
  }
  void Output(){
    cout << "名前: " <<name <<"\n年齢: " <<age <<"\n";
  }
};

int main(void) {
  Kojima kojima("小島", 32);
  kojima.Output();

  return 0;
}
