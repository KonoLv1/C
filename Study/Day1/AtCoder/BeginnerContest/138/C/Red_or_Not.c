#include <stdio.h>
 
int main(void){

	int a;
	char s[10];
 
    //  入力処理
    
    printf("2800以上、5000未満の整数を入力してください\n");
    scanf("%d",&a);
    printf("10文字以下の文字列を入力してください\n");
    scanf("%s",s);
 
    //  計算処理 出力処理
    
    if (a >= 3200){
        printf("%s",s);
    }else{
        printf("red");
    }

}