#include<iostream>
using std::cout;
using std::cin;

class Car {
private:
  int num;
  float gas;
public:
  Car();
  Car(int n, float g);
  void show();
};

Car::Car(){     //引数なし
  num = 0;
  gas = 0.0;
  cout <<"車のデータ\n";
}

Car::Car(int n, float g){
  num = n;
  gas = g;
  cout <<"number: "<< num <<"\ngas: "<< gas <<'\n';
}

int main(void){
  Car kuruma_Data[3] = {
    Car(),
    Car(0021, 30.25),
    Car(3465, 10.00)
  };
  kuruma_Data[1].show();
  kuruma_Data[2].show();
  
  return 0;
}

void Car::show(){
  cout <<"車のナンバー: "<< num <<'\n';
  cout <<"ガソリン容量: "<< gas <<'\n';
}
