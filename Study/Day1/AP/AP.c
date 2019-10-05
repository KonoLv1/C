#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// rand関数使用のため
#include <stdlib.h>
#include <time.h>

#define BUF 256

int AnsewrCheck(char *buf6,int score,int all,int mode);

int main(){
  FILE *fp;
  char *fname = "AP.csv";
  int ret,i;
  int max;
  int mode;
  int score,all;
  all = score = 0;
  char buf[BUF];
  char buf1[BUF];
  char buf2[BUF];
  char buf3[BUF];
  char buf4[BUF];
  char buf5[BUF];
  char buf6[BUF];
  //  乱数初期化
  srand((unsigned int)time(NULL));
  //  問題用csvファイル読み込み 
  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%sファイルが見つかりません\n", fname );
    return -1;
  }
  fscanf(fp,"%s",buf);
  // 問題数を読み込み
  max = atoi(buf);
  // 問題数分ループ
  for(i = 0; i < max; i++){  
    fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%s", buf1, buf2, buf3, buf4, buf5, buf6);
    // 選択肢をランダムで表示
    mode = rand() % 4 + 1;
    switch (mode){
      case 1:
        printf("%s\n\n 1: %s\n 2: %s\n 3: %s\n 4: %s\n ",buf1, buf2, buf3, buf4, buf5);
        break;
      case 2:
        printf("%s\n\n 1: %s\n 2: %s\n 3: %s\n 4: %s\n ",buf1, buf5, buf2, buf3, buf4);
        break;
      case 3:
        printf("%s\n\n 1: %s\n 2: %s\n 3: %s\n 4: %s\n ",buf1, buf4, buf5, buf2, buf3);
        break;
      case 4:
        printf("%s\n\n 1: %s\n 2: %s\n 3: %s\n 4: %s\n ",buf1, buf3, buf4, buf5, buf2);
        break;
      default:
        break;
    }
    printf("\n");
    // 正解数と解いた問題数を加算
    score = score + AnsewrCheck(buf6,score,all,mode);
    all++;
  }
  fclose( fp );
}

// 正誤判定とコマンド入力用関数
int AnsewrCheck(char *buf6,int score,int all,int mode){
  char user_ans[256];
  int buf7;
  char cmd1[] = "?";
  char cmd2[] = "SCORE";
  // 正解か不正解を判定するまではループ
  while(1){
    //  解答、もしくはコマンド入力
    scanf(" %s",&user_ans);

    //  コマンド判定　ここから
    // ?が入力された場合
    if(strcmp(user_ans,cmd1)==0){
      printf("--- INFORMATION ---\n ?     : INFORMATION\n SCORE : SCORE\n");
      continue;
    //  SCOREが入力された場合
    }else if(strcmp(user_ans,cmd2)==0){
      printf("\n SCORE: OK %d NG %d\n",score,all - score);
      continue;
    }
    // 正誤判定
    buf7 = atoi(buf6);
    buf7 = buf7 + mode - 1;
    if (buf7 > 4){
      buf7 = buf7 - 4;
    }
    sprintf(buf6, "%d", buf7);
    if(strcmp(buf6,user_ans)==0){
      printf("OK\n\n");
      score = 1;
      break;
    }else{
      printf("NG Answer is %s\n\n",buf6);
      break;
    }
  }
  // 正解なら1を、不正解なら0を返す
  return score;
}

/* Information 
? Junichi Koyama Twitter@KonoLv1
応用情報技術者試験対策

*/
