#include<stdio.h>
int endcheck(void);
 
int main(void){

    char s[200001] = {};        //  文字列
 
    //  入力処理
    
    printf("Cloudy か Rainy か Sunny を入力してください\n");
    scanf("%s",s);
 
    //  計算処理
    //  出力処理

    if (s[0] == 'S'){
        printf("Cloudy");
    }else if (s[0] == 'C'){
        printf("Rainy");
    }else{
        printf("Sunny");
    }
    endcheck();
}

int endcheck(void){
    char end[256];
    printf("\n\n終了するには文字を入力してください");
    scanf("%s",end);
    return 0;
}