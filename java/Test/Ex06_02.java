class Ex06_02 {
  public static void main(String... args){
    float[] teihen = {3f, 10f, 2.5f};
    float[] takasa = {4f, 10f, 8.5f};
    double kekka;

    for(int i=0; i<3; i++){
      kekka = teihen[i] * takasa[i] / 2;
      System.out.println((i + 1) + ". " + kekka + "(cm^2)");
    }
  }
}
