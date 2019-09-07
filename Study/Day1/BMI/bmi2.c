#include<stdio.h>
int class(double date);
int endcheck(void);

int main (void){

    double hight,weight,date;
    printf("肥満指数を計算します。身長を入力してください\n");
    scanf("%lf",&hight);
    printf("体重を入力してください\n");
    scanf("%lf",&weight);
    hight = hight / 100;
    date = weight / (hight * hight);
    class(date);
    endcheck();

    return 0;
}

int class(double date){
    printf("あなたのBMIは　%2.2lf　で、判定結果は【 ",date);
    if (date < 16){
        printf("痩せすぎ");
    }else if (date < 17){
        printf("痩せの体重");
    }else if (date < 18.5){
        printf("痩せ気味の体重");
    }else if (date < 25){
        printf("普通の体重");
    }else if (date < 30){
        printf("肥満になりかけの体重");
    }else if (date < 35){
        printf("肥満（１度）");
    }else if (date < 40){
        printf("肥満（２度）");
    }else{
        printf("肥満（３度）");
    }
    printf(" 】です。");
    return 0;
}

//  ここからは操作不要   //

int endcheck(void){
    char end[256];
    printf("\n\n終了するには文字を入力してください");
    scanf("%s",end);
    return 0;
}

//  ここまでは操作不要   //

/* Inftomation 

判定基準はWHO（世界保健機構）の肥満度判定基準を使用

【参考URL：wikipedia】
https://ja.wikipedia.org/wiki/%E3%83%9C%E3%83%87%E3%82%A3%E3%83%9E%E3%82%B9%E6%8C%87%E6%95%B0

*/
