#include<stdio.h>
int endcheck(void);
 
int main(void){

    char s[200001] = {};        //  •¶š—ñ
 
    //  “ü—Íˆ—
    
    printf("Cloudy ‚© Rainy ‚© Sunny ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%s",s);
 
    //  ŒvZˆ—
    //  o—Íˆ—

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
    printf("\n\nI—¹‚·‚é‚É‚Í•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%s",end);
    return 0;
}