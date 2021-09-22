//すきゃんとじょうけんぶんき
#include<stdio.h>
int main(void){
  short age;
  short is_seito;

  printf("このたびは「猫でもランド」に\n"
          "ご来園ありがとうございます。\n");
  printf("-------------------------\n");
  printf("では、年齢を入力してください = ");
  scanf("%hd", &age);
  printf("「猫でもランド」の学生さんですか？(YES:1, NO:0)");
  scanf("%hd", &is_seito);

  if(age <= 6){
    printf("%hd さいですね、入場料は無料です\n", age);
  }
  else if(is_seito == 1){
    printf("「猫でもランド」の学生さんですね、入場料は無料です\n");
  }
  else{
    printf("%hd さいですね？ チャージ料10万円です\n", age);
  }
  return 0;
}
