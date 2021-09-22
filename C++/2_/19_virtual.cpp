#include<iostream>
using std::cout;
using std::cin;

class Car {
protected:
  int num;
  float gas;
public:
  Car();
  void set_Car(int, float);     //ナンバーとガスの設定
  void show();
};
class RcCar : public Car {
private:
  int course;
public:
  RcCar();
  void set_Course(int);
  void show();
};

Car::Car(){ cout <<"車のデータ\n"; };
void Car::set_Car(int n, float g){
  cout <<"Number: ";  cin >> n;  num = n;
  cout <<"Gas: ";  cin >> g;  gas = g;
}
void Car::show(){ cout <<"ナンバー: "<< num <<"  ガソリン容量: "<< gas <<'\n'; }


RcCar::RcCar(){ cout <<"コース(Course)\n"; }
void RcCar::set_Course(int c){ cout <<"Course: ";  cin >> c;  course = c; }
void RcCar::show(){ cout <<"  ナンバー: "<< num <<"  ガソリン容量: "<< gas <<
"  コース番号: "<< course <<'\n'; }

int main(void){
  Car* ptrcar[2];
  int num, course;  double gas;
  Car car;  RcCar rccar;
  ptrcar[0] = &car;  ptrcar[1] = &rccar;

  ptrcar[0]->set_Car(num, gas);

  rccar.set_Course(course);
  ptrcar[1]->set_Car(num, gas);

  for(int i=0; i<2; i++)
    ptrcar[i]->show();

  return 0;
}
