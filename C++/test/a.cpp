#include<iostream>
using std::cout;
using std::cin;

class Enzan {  //コンストラクタで計算方法入力
private:
  char ch;
  double num1;
  double num2;
  double kekka;
public:
  Enzan();
  void Input();
  void Keisan();
  void Output();
};

Enzan::Enzan(){
  char c;
  cout <<"計算方法入力(+, -, *, /, 0): ";
  cin >> c;
  ch = c;
}

void Enzan::Input(){
  double a, b;

  cout <<"num1: ";  cin >> a;
  num1 = a;
  cout <<"num2: ";  cin >> b;
  num2 = b;
}

void Enzan::Keisan(){
  switch(ch){
    case '+': kekka = num1 + num2;  break;
    case '-': kekka = num1 - num2;  break;
    case '*': kekka = num1 * num2;  break;
    case '/': kekka = num1 / num2;  break;
    default: cout <<"もう一度入力してください\n";
  }
}

void Enzan::Output(){ cout << num1 << ch << num2 << " = " << kekka <<'\n'; }

int main(void){
  Enzan enzan;

  enzan.Input();
  enzan.Keisan();
  enzan.Output();

  return 0;
}

//void Point::setX(int x){ if(x > 10 || x < 0) x=0; }
//void Point::setY(int y){ if(y > 10 || y < 0) y=0; }
//int Point::getX(){ cout <<"x座標: ";  cin >> x;  return x; }
//int Point::getY(){ cout <<"y座標: ";  cin >> y;  return y; }
/*
#include<iostream>
using namespace std;

typedef struct {
  int age;
  double bl;
  double bw;
} PERSON;

void aging(PERSON *);

int main(void){
  PERSON hito;

  cout <<"年齢: ";  cin >> hito.age;
  cout <<"身長: ";  cin >> hito.bl;
  cout <<"体重: ";  cin >> hito.bw;

  cout <<"年齢は "<<hito.age<<" 身長 "<<hito.bl
    <<" 体重 "<<hito.bw<<'\n';
  aging(&hito);
  return 0;
}

void aging(PERSON *p){
  cout <<"1年後\n";
  cout <<"身長: ";  cin >> p->bl;
  cout <<"体重: ";  cin >> p->bw;

  cout <<"年齢は "<<(p->age)+1<<" 身長 "<<p->bl
    <<" 体重 "<<p->bw<<'\n';
}
*/
/*
#define KAZU 2
#include<iostream>
using namespace std;

typedef struct {
  int age;
  double bl;
  double bw;
} PERSON;

int main(void){
  PERSON hito[KAZU];

  for(int i=0; i<KAZU; i++){
    cout << i+1 <<" 人目\n";
    cout <<"年齢: ";  cin >> hito[i].age;
    cout <<"身長: ";  cin >> hito[i].bl;
    cout <<"体重: ";  cin >> hito[i].bw;
  }
  for(int i=0; i<KAZU; i++){
    cout << i+1 <<" 人目: 年齢は "<<hito[i].age<<" 身長 "<<hito[i].bl
      <<" 体重 "<<hito[i].bw<<'\n';
  }
  return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int count(char *, char);

int main(void){
  char str[100], ch;

  cout <<"文字列入力: ";  cin >> str;
  cout <<"文字列の中から1文字入力: ";  cin >> ch;
  cout << str <<" のなかには "<< ch <<" が"<< count(str, ch) <<" 個ありました\n";
  return 0;
}

int count(char str[], char ch){
  int i = 0, find = 0;

  while(str[i] != '\0'){
    if(str[i] == ch)
      find++;
    i++;
  }
  return find;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int length(char *);

int main(void){
  char str[100];

  cout <<"文字列を入力(長さを測定): ";
  cin >> str;
  cout <<"長さは"<< length(str) <<"でした\n";
  return 0;
}

int length(char *str){return strlen(str);}
*/
/*
#define SEITO 5

#include<iostream>
using namespace std;

int main(void){
  int x[SEITO], big, tmp;

  cout<<SEITO<<" 人分の点数を入力\n";
  cin >> x[0];
  big = x[0];
  for(int i=1; i<SEITO; i++){
    cin >> x[i];
    if(big < x[i]){
      tmp = x[i];
      x[i] = big;
      big = tmp;
    }
  }
  cout <<"最高点は "<< big <<" でした\n";
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  int x1, x2, a;
  int &ra = a;

  cout <<"x1 = "; cin >> x1;
  cout <<"x2 = "; cin >> x2;
  cout <<"x1, x2に加算する点数: ";
  cin >> a; cout << a <<" 点加点しました\n";
  x1 += a;  x2 += a;
  cout <<"x1は"<< x1 <<"になりました\n";
  cout <<"x2は"<< x2 <<"になりました\n";

  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int add(int *, int *);

int main(void){
  int x1, x2;

  cout <<"x1 = "; cin >> x1;
  cout <<"x2 = "; cin >> x2;
  add(&x1, &x2);
  cout <<"x1は"<< x1 <<"になりました\n";
  cout <<"x2は"<< x2 <<"になりました\n";
  return 0;
}

int add(int *num1, int *num2){
  int a;

  cout <<"x1, x2に加算する点数: ";
  cin >> a; cout << a <<" 点加点しました\n";
  *num1 += a;  *num2 += a;
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

template <class T>
T square(T x){ return x*x;}

int main(void){
  int num1, ans1;
  double num2, ans2;

  cout<<"整数入力";
  cin>> num1;
  cout<<"少数入力";
  cin>> num2;
  ans1 = square(num1);
  ans2 = square(num2);
  cout<< num1 <<"の二乗は"<< ans1 <<"です\n";
  cout<< num2 <<"の二乗は"<< ans2 <<"です\n";
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int spuare(int x);
double square(double x);

int main(void){
  int num1, ans1;
  double num2, ans2;

  cout << "整数入力: ";
  cin >> num1;
  ans1 = square(num1);
  cout << num1 <<"の二乗は"<< ans1 <<"です\n";

  cout <<"少数入力: ";
  cin >> num2;
  ans2 =  square(num2);
  cout << num2 <<"の二乗は"<< ans2 <<"です\n";
  return 0;
}

inline int spuare(int x){return x*x;}

inline double square(double x){return x*x;}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  int count = 0;

  for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}
*/
/*
#include<iostream>

int main(void){
  int no, sum = 0;

  while(no != 0){
    std::cin >> no;
    sum += no;
  }
  std::cout <<"テストの合計点は "<< sum <<" 点です\n";
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){

  for(int i=0; i<=10; i++){
    if((i % 2) == 0){
      cout << i << '\n';
    }
  }
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
  int no;

  cout << "成績を入力: ";
  cin >> no;
  switch(no){
    case 0: cout <<"成績は"<< no <<"です。ばかなの??　(｀・∀・´)\n";
      break;
    case 1: cout <<"成績は"<< no <<"です。もっとがんばりましょう\n";
      break;
    case 2: cout <<"成績は"<< no <<"です。もう少しがんばりましょう\n";
      break;
    case 3: cout <<"成績は"<< no <<"です。さらに上をめざしましょう\n";
      break;
    case 4: cout <<"成績は"<< no <<"です。たいへんよくできました\n";
      break;
    case 5: cout <<"成績は"<< no <<"です。大変優秀です\n";
      break;
    default: cout <<"入力ミスです。( ^q^)ｷﾀ\n";
      break;
  }
  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  int num1, num2;

  cout << "num1 = ";
  cin >> num1;
  cout << "num2 = ";
  cin >> num2;
  if(num1 == num2)
    cout << num1 <<" と "<< num2 <<" は等しい";
  else if(num1 > num2)
    cout << num1 <<" は "<< num2 <<" より大きい";
  else
    cout << num1 <<" は "<< num2 <<" より小さい";

  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  int no;

  cout << "整数を入力: ";
  cin >> no;
  if((no % 2) == 0)
    cout << no << " は偶数です\n";
  else
    cout << no << " は奇数です\n";

  return 0;
}
*/
/*
#define SUBJECT 5

#include<iostream>
using namespace std;

int main(){
  int sum = 0, tensuu;
  double ave;

  cout << "科目1 の点数: ";
  cin >> tensuu;
  sum += tensuu;
  cout << "科目2 の点数: ";
  cin >> tensuu;
  sum += tensuu;
  cout << "科目3 の点数: ";
  cin >> tensuu;
  sum += tensuu;
  cout << "科目4 の点数: ";
  cin >> tensuu;
  sum += tensuu;
  cout << "科目5 の点数: ";
  cin >> tensuu;
  sum += tensuu;
  cout << "5科目の合計点は " << sum << "です\n";
  ave = sum / SUBJECT;
  cout << "5科目の平均点は " << ave << "です\n";

  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  double takasa, teihen, kekka;

  cout << "三角形の面積\n";
  cout << "高さ = ";
  cin >> takasa;
  cout << "底辺 = ";
  cin >> teihen;
  kekka = teihen * takasa / 2;
  cout << "三角形の面積は " << kekka << " です\n";

  return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(void){
  cout << "0-4 = " << 0-4 << '\n';
  cout << "3.14 * 2 = " << 3.14*2 << '\n';
  cout << "5 / 3 = " << 5/3 << '\n';
  cout << "30 % 7 = " << 30%7 << '\n';
  cout << "(7+32) / 5 = " << (7+32)/5 << '\n';

  return 0;
}
*/
