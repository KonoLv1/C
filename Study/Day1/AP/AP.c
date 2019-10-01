// 制作途中
#include <stdio.h>

int main(){
  FILE *fp;
  char *fname = "AP.csv";
  int ret;
  char buf[3][10];
  double data[3];

  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%sファイルが開けません\n", fname );
    return -1;
  }

  printf("\n");

  fscanf(fp, "%[^,],%[^,],%[^,],%[^,],%[^,],%s", buf[0], buf[1], buf[2], buf[3], buf[4]);
  printf("問：%s \n\n1：%s \n2：%s\n \n3：%s\n \n4：%s\n",buf[0], buf[1], buf[2], buf[3], buf[4]);


  while( (ret=fscanf(fp, "%lf,%lf,%lf,%lf,%lf", &data[0], &data[1], &data[2], &data[3], &data[4])) != EOF){
    printf("%lf %lf %lf %lf %lf\n", data[0], data[1], data[2], data[3], data[4]);
  }

  printf("\n");
  fclose( fp );
}