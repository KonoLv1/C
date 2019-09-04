#include<stdio.h>
int endcheck(void);

int main (void){

    double hight,weight;
    printf("肥満指数を計算します\n身長を入力してください\n");
    scanf("%lf",&hight);
    printf("体重を入力してください\n");
    scanf("%lf",&weight);
    hight = hight / 100;
    printf("あなたのBMIは　%2.2lf　です。",weight / (hight * hight));
    endcheck();
    return 0;
}

int endcheck(void){
    char end[256];
    printf("\n\n終了するには文字を入力してください");
    scanf("%s",end);
    return 0;
}