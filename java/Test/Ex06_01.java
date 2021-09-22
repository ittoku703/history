class Ex06_01 {
  public static void main(String[] args){
    for(int i=2; i<=100; i++){
      boolean f = true;
      for(int j=2; j<=i/2; j++){  //2から初めてiの/2以下で終わる
        if(i % j == 0){
          f = false;
          break;
        }
      }
      if(f)
        System.out.print(i + " ");
    }
    System.out.println();
  }
}
