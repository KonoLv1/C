// ����r��
#include <stdio.h>

int main(){
  FILE *fp;
  char *fname = "AP.csv";
  int ret;
  char buf[3][10];
  double data[3];

  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%s�t�@�C�����J���܂���\n", fname );
    return -1;
  }

  printf("\n");

  fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%s", buf[0], buf[1], buf[2], buf[3], buf[4]);
  printf("��F%s \n\n1�F%s \n2�F%s\n \n3�F%s\n \n4�F%s\n",buf[0], buf[1], buf[2], buf[3], buf[4]);


  while( (ret=fscanf(fp, "%lf,%lf,%lf,%lf,%lf", &data[0], &data[1], &data[2], &data[3], &data[4])) != EOF){
    printf("%lf %lf %lf %lf %lf\n", data[0], data[1], data[2], data[3], data[4]);
  }

  printf("\n");
  fclose( fp );
}