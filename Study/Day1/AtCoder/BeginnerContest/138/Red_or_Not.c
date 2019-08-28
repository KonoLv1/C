#include <stdio.h>
 
int main(void){

	int a;
	char s[10];
 
    //  “ü—Íˆ—
    
    printf("2800ˆÈãA5000–¢–ž‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%d",&a);
    printf("10•¶ŽšˆÈ‰º‚Ì•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%s",s);
 
    //  ŒvŽZˆ— o—Íˆ—
    
    if (a >= 3200){
        printf("%s",s);
    }else{
        printf("red");
    }
    
    return 0;
}