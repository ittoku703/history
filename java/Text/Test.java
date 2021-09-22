public class Test {                //外部クラス

  protected Test(){
    System.out.println("外部Testのコンストラクト");
  }

  public static void Static(){
    System.out.println("外部staticだよ");
  }
  
  private void Instance(){
    System.out.println("外部Instanceだよ");
  }


  class Test2 {            //内部クラス

    protected Test2(){
      System.out.println("Test2のコンストラクト");
    }
    /*public static void Static2(){     //内部クラスではstaticは使えない
      System.out.println("内部staticだよ");
    }*/
    private void Instance2(){
      System.out.println("内部Instanceだよ");
    }
  
  }

  public static void main(String[] args){

    Test test = new Test();
    test.Instance();
    Static();

    Test.Test2 test2 = test.new Test2();
    test2.Instance2();
    //Static2();
    System.out.println("内部Staticはふせいだよ");
  }
}
