#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// rand�֐��g�p�̂���
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
  //  ����������
  srand((unsigned int)time(NULL));
  //  ���pcsv�t�@�C���ǂݍ��� 
  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%s�t�@�C����������܂���\n", fname );
    return -1;
  }
  fscanf(fp,"%s",buf);
  // ��萔��ǂݍ���
  max = atoi(buf);
  // ��萔�����[�v
  for(i = 0; i < max; i++){  
    fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%s", buf1, buf2, buf3, buf4, buf5, buf6);
    // �I�����������_���ŕ\��
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
    // ���𐔂Ɖ�������萔�����Z
    score = score + AnsewrCheck(buf6,score,all,mode);
    all++;
  }
  fclose( fp );
}

// ���딻��ƃR�}���h���͗p�֐�
int AnsewrCheck(char *buf6,int score,int all,int mode){
  char user_ans[256];
  int buf7;
  char cmd1[] = "?";
  char cmd2[] = "SCORE";
  // �������s�����𔻒肷��܂ł̓��[�v
  while(1){
    //  �𓚁A�������̓R�}���h����
    scanf(" %s",&user_ans);

    //  �R�}���h����@��������
    // ?�����͂��ꂽ�ꍇ
    if(strcmp(user_ans,cmd1)==0){
      printf("--- INFORMATION ---\n ?     : INFORMATION\n SCORE : SCORE\n");
      continue;
    //  SCORE�����͂��ꂽ�ꍇ
    }else if(strcmp(user_ans,cmd2)==0){
      printf("\n SCORE: OK %d NG %d\n",score,all - score);
      continue;
    }
    // ���딻��
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
  // �����Ȃ�1���A�s�����Ȃ�0��Ԃ�
  return score;
}

/* Information 
? Junichi Koyama Twitter@KonoLv1
���p���Z�p�Ҏ����΍�

*/
