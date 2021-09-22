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

enum MazeDirection{ //方向
  UP = 119,
  DOWN = 122,
  LEFT = 97,
  RIGHT = 115,
  Invalid};

void MazePlayermove(int *playerROW, int *PlayerColumn, MazeBlock maze[MAZE_ROW][MAZE_COLUMN]){
  char buf[100];

  printf("%c:上\n", UP);
  printf("%c:下\n", DOWN);
  printf("%c:左\n", LEFT);
  printf("%c:右\n", RIGHT);
  printf("文字を入力: ");
  fgets(buf, sizeof(buf), stdin);     //文字列で入力を読み込む

  switch(*buf){
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

    default: printf("入力ミスです\n"); break;
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
    { //STAGE1
      { {START, TRUE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {WALL, FALSE} , {WALL, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {WALL, FALSE} },
      { {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} },
      { {PATH, FALSE} , {PATH, FALSE} , {WALL, FALSE} , {WALL, FALSE} , {WALL, FALSE} },
      { {WALL, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {PATH, FALSE} , {GOAL, TRUE}  },
    },
    { //STAGE2
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
enum Mazemenu {EXIT, STAGE1, STAGE2};
//タイトル
int MazeTitle(){
  char buf[100];
  int menu = -1;

  printf("\n\n***迷路ゲーム***\n\n");

  printf("メニュー\n");
  printf("%d: ステージ1\n", STAGE1);
  printf("%d: ステージ2\n", STAGE2);
  printf("%d: 終了\n", EXIT);

  printf("メニューを選んでください: ");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf,"%d", &menu);

  while(menu < 0 || menu > STAGE2){
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
        case STAGE1: stage = 0; break;
        case STAGE2: stage = 1; break;
      }
    }
    //迷路ゲーム
    MazeGame(stage);
  }
  return 0;
}
