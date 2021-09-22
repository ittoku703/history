#include<stdio.h>

#define STAGE       2
#define MAZE_ROW    5     //迷路の行数
#define MAZE_COLUMN 5    //迷路の列数

typedef struct {
  int row;        //プレイヤー(横)
  int column;     //プレイヤー(列)
} Mazeplayer;

enum MazeKind {PATH, WALL, START, GOAL};     //ブロックの種類
enum MazeFlag {FALSE, TRUE};                 //ブロックが判明しているか

typedef struct{
  enum MazeKind kind;     //種類
  enum MazeFlag flag;     //ブロック判定
} MazeBlock;

//プレイヤーの初期化
int MazeplayerInit(int *playerROW, int *PlayerColumn, MazeBlock maze[MAZE_ROW][MAZE_COLUMN]){
  int i, j;

  for(i=0; i<MAZE_ROW; i++){
    for(j=0; j<MAZE_COLUMN; j++){
      if(maze[i][j].kind == START){
        *playerROW    = i;
        *PlayerColumn = j;
        return 0;     //関数終了
      }
    }
  }
  //スタート地点がなければプレイヤーを設定できずここまでくる
  perror("スタートがありません\n");
  return -1;
}

//迷路表示
void MazeDraw(int playerROW, int PlayerColumn, MazeBlock maze[MAZE_ROW][MAZE_COLUMN]){
  int i, j;

  for(i=0; i<MAZE_ROW; i++){
    for(j=0; j<MAZE_COLUMN; j++){
      if(i == playerROW && j == PlayerColumn){
        printf("P");
      }
      else if(maze[i][j].flag == FALSE){     //ブロック不明
        printf("?");
      }
      else {
        switch(maze[i][j].kind){
          case WALL: printf("□"); break; //壁
          case GOAL: printf("G"); break; //ゴール
          default: printf(" "); break; //その他(道とスタート)
        }
      }
    }
    printf("\n");
  }
}

//方向
enum MazeDirection{UP, DOWN, LEFT, RIGHT, Invalid};

void MazePlayermove(int *playerROW, int *PlayerColumn, MazeBlock maze[MAZE_ROW][MAZE_COLUMN]){
  char buf[100];
  int  direction = -1;

  printf("%d:上\n", UP);
  printf("%d:下\n", DOWN);
  printf("%d:左\n", LEFT);
  printf("%d:右\n", RIGHT);
  printf("数字を入力: ");

  fgets(buf, sizeof(buf), stdin);     //文字列で入力を読み込む
  sscanf(buf, "%d", &direction);      //数字にできる場合変換

  while(direction < 0 || direction > (Invalid - 1)){ //入力が正しい場ありまで繰り返し
    printf("再入力してください: ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &direction);
  }

  switch(direction){
    case UP: {     //上移動
      if(*playerROW - 1 >= 0){ //迷路の範囲外でないことを確認
        maze[*playerROW - 1][*PlayerColumn].flag = TRUE; //ブロックの種類が判明
        if(maze[*playerROW - 1][*PlayerColumn].kind != WALL){
          *playerROW -= 1; //移動
          printf("\n上に移動しました\n");
        }
        else {
          printf("壁です\n");
        }
      }
      else {
        printf("範囲外です\n");
      }
    }
    break;

    case DOWN: {     //下移動
      if(*playerROW + 1 >= 0){ //迷路の範囲外でないことを確認
        maze[*playerROW + 1][*PlayerColumn].flag = TRUE; //ブロックの種類が判明
        if(maze[*playerROW + 1][*PlayerColumn].kind != WALL){
          *playerROW += 1; //移動
          printf("\n下に移動しました\n");
        }
        else {
          printf("壁です\n");
        }
      }
      else {
        printf("範囲外です\n");
      }
    }
    break;

    case LEFT: {     //左移動
      if(*PlayerColumn - 1 >= 0){ //迷路の範囲外でないことを確認
        maze[*playerROW][*PlayerColumn - 1].flag = TRUE; //ブロックの種類が判明
        if(maze[*playerROW][*PlayerColumn - 1].kind != WALL){
          *PlayerColumn -= 1; //移動
          printf("\n左に移動しました\n");
        }
        else {
          printf("壁です\n");
        }
      }
      else {
        printf("範囲外です\n");
      }
    }
    break;

    case RIGHT: {     //右移動
      if(*PlayerColumn + 1 >= 0){ //迷路の範囲外でないことを確認
        maze[*playerROW][*PlayerColumn + 1].flag = TRUE; //ブロックの種類が判明
        if(maze[*playerROW][*PlayerColumn + 1].kind != WALL){
          *PlayerColumn += 1; //移動
          printf("\n右に移動しました\n");
        }
        else {
          printf("壁です\n");
        }
      }
      else {
        printf("範囲外です\n");
      }
    }
    break;
  }
}

//ゴール判定
int MazeGoalCheck(int playerROW, int PlayerColumn, MazeBlock maze[MAZE_ROW][MAZE_COLUMN]){
  if(maze[playerROW][PlayerColumn].kind == GOAL){ //プレイヤー位置がゴール地点に等しい
    printf("ゴール！\n");
    return 1;
  }
  return 0;
}

//迷路ゲーム
void MazeGame(int stage){
  Mazeplayer player;     //プレイヤー

  MazeBlock maze[STAGE][MAZE_ROW][MAZE_COLUMN] = {
    { //STAGE0
      { {START, TRUE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {WALL, FALSE} , {WALL, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {WALL, FALSE} },
      { {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {PATH, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {WALL, FALSE} , {WALL, FALSE} },
      { {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {GOAL, TRUE}  },
    },
    { //STAGE1
      { {START, TRUE} , {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {WALL, FALSE} },
      { {PATH, FALSE} , {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {PATH, FALSE} , {WALL, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {PATH, FALSE} },
      { {PATH, FALSE} , {WALL, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {GOAL, TRUE}  },
    }
  };
  //プレイヤー初期化
  if(MazeplayerInit(&player.row, &player.column, maze[stage]) == -1){
    return;
  }
  while(MazeGoalCheck(player.row, player.column, maze[stage]) != 1){ //ゴールまで続ける
    //迷路表示
    MazeDraw(player.row, player.column, maze[stage]);
    //プレイヤー移動
    MazePlayermove(&player.row, &player.column, maze[stage]);
  }
  //迷路最終結果発表
  MazeDraw(player.row, player.column, maze[stage]);
}

//メニュー
enum Mazemenu {STAGE0, STAGE1, EXIT};
//タイトル
int MazeTitle(){
  char buf[100];
  int menu = -1;

  printf("\n\n***迷路ゲーム***\n\n");

  printf("メニュー\n");
  printf("%d: ステージ0\n", STAGE0);
  printf("%d: ステージ1\n", STAGE1);
  printf("%d: 終了\n", EXIT);

  printf("メニューを選んでください: ");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf,"%d", &menu);

  while(menu < 0 || menu > EXIT){
    printf("再入力してください\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf,"%d", &menu);
  }
  return menu;
}

int main(void){
  int menu;
  int stage;

  while(1){
    menu = MazeTitle();
    printf("\n");

    if(menu == EXIT){
      break;
    }
    else {
      switch(menu){
        case STAGE0: stage = 0; break;
        case STAGE1: stage = 1; break;
      }
    }
    //迷路ゲーム
    MazeGame(stage);
  }
  return 0;
}
