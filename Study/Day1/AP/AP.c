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


  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%sファイルが見つかりません\n", fname );
    return -1;
  }

 srand((unsigned int)time(NULL));


  fscanf(fp,"%s",buf);
  max = atoi(buf);
  for(i = 0; i < max; i++){

  mode = rand() % 4 + 1;
    
  fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%s", buf1, buf2, buf3, buf4, buf5, buf6);
  switch (mode)
  {
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
  score = score + AnsewrCheck(buf6,score,all,mode);
  all++;
  }




  fclose( fp );
}


int AnsewrCheck(char *buf6,int score,int all,int mode){
  char b[256];
  int buf7;
  char cmd1[] = "?";
  char cmd2[] = "SCORE";
  while(1){

    //  解答、もしくはコマンド入力
    scanf(" %s",&b);

    //  コマンド判定　ここから
    if(strcmp(b,cmd1)==0){
      printf("--- INFORMATION ---\n ?     : INFORMATION\n SCORE : SCORE\n");
      continue;
    }else if(strcmp(b,cmd2)==0){
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
    if(strcmp(buf6,b)==0){
      printf("OK\n\n");
      score = 1;
      break;
    }else{
      printf("NG Answer is %s\n\n",buf6);
      break;
    }
  }
  return score;
}

/* Information 
? Junichi Koyama Twitter@KonoLv1
応用情報技術者試験対策

*/
