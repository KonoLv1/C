#include <stdio.h>

void main (void){
    int x[256];
    int i,j,count,tmp;
    /*
    i,j     :   ループ制御用
    count   :   入力する数値の数
    tmp     :   一時保管用
    */

    //  入力処理（ここで数値の入力を行う）
    printf("並べ替える数値はいくつありますか？：");
    scanf("%d",&count);
    printf("並べ替える数値を半角スペースをいれながら入力してください：");
    for(i = 0; i < count; i++){
        scanf("%d",&x[i]);
    }

    //  計算処理（ここで数値の並べ替えを行う）
    for(i = count - 1; i >= 1; i--){
        for (j = i - 1; j >= 0; j--){
            if (x[i] < x[j]){
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }

    //  出力処理（ここで並べ替えた数値の出力を行う）
    for(i = 0; i < count; i++){
        printf("%d",x[i]);
    }
}