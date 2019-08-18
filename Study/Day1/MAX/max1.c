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
    printf("‚Ğ‚Æ‚Â‚ß‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%d",&a);
    printf("‚Ó‚½‚Â‚ß‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%d",&b);
    printf("‘å‚«‚¢”’l‚Í %d ‚Å‚·",max(a,b));
    return 0;
}