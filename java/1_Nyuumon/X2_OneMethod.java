/**/

import java.util.Scanner;

public class X2_OneMethod {
  static int num1;
  static int num2;

  private static void Input(int a, int b){
    System.out.print("num1 = ");
    Scanner scan_1 = new Scanner(System.in);
    a = scan_1.nextInt();
    num1 = a;

    System.out.print("num2 = ");
    Scanner scan_2 = new Scanner(System.in);
    b = scan_2.nextInt();
    num2 = b;
  }

  private static void printThreeValues(){
    int maxiNum = num1;
    if(num2 > num1)
      maxiNum = num2;

    int miniNum = num1;
    if(num1 > num2)
      miniNum = num2;

    int average = (num1 + num2) / 2;
    System.out.println("最大値: " + maxiNum);
    System.out.println("最小値: " + miniNum);
    System.out.println("平均値: " + average);
  }

  public static void main(String[] args){
    Input(num1, num2);
    printThreeValues();
  }
}
