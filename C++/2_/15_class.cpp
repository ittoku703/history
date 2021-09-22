#include<iostream>
using std::cout;

class Car {
private:
  int num;
  double gas;
public:
  void show();
  void set_num_gas(int , double);
};

void Car::show(){
  cout <<"車のナンバー: "<< num <<'\n';
  cout <<"ガソリン容量: "<< gas <<'\n';
}

void Car::set_num_gas(int n, double g){
  if(g > 1000 || g < 0)
    cout <<"gas の値が正しくありません\n";
  else {num = n;  gas = g;}
}

int main(void){
  Car mycar;

  mycar.set_num_gas(1234, 30.5);
  mycar.show();

  return 0;
}
