#include <stdio.h>

int max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}
int main(void){
    int a,b;
    printf("ひとつめの数値を入力してください\n");
    scanf("%d",&a);
    printf("ふたつめの数値を入力してください\n");
    scanf("%d",&b);
    printf("大きい数値は %d です",max(a,b));
    return 0;
}