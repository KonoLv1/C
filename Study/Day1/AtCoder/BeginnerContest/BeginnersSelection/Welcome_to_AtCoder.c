#include<stdio.h>
void comment(void);
void endcheck(void);

int main(void){
    comment();
    int a,b,c;
    char s[256];
    scanf("%d %d %d %s",&a,&b,&c,s);
    printf("%d %s\n",a + b + c,s);
    endcheck();
    return 0;
}

void comment(void){
    printf("半角スペース区切りで数値を３つ、文字列を１つ入力してください。");
}

void endcheck(void){
    char end[256];
    printf("\n\n終了するには文字を入力してください");
    scanf("%s",end);
}