//　Sum of Two Integers
 
#include <stdio.h>

int main(void){
    int n,count;
 
    //  入力処理
    
    scanf("%d",&n);
    
    // 計算処理
    
    if (n % 2 == 0){
        count = n / 2 - 1;
    }else{
        count = n / 2;
    }
    
    // 出力処理
    printf("%d",count);
  
}