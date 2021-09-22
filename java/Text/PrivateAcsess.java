/*クラスTest*/

import java.util.Scanner;

public class PrivateAcsess {
  private String name;
  private int age;

  public void PrivateInput(){
    System.out.print("名前入力: ");
    Scanner scan_1 = new Scanner(System.in);
    name = scan_1.nextLine();
    System.out.print("年齢入力: ");
    Scanner scan_2 = new Scanner(System.in);
    age = scan_2.nextInt();
  }

  public void PrivateOutput(){
    System.out.println("名前: " + name + " 年齢: " + age);
  }

  public static void main(String[] args){
    PrivateAcsess test = new PrivateAcsess();
    test.PrivateInput();
    test.PrivateOutput();
  }
}
