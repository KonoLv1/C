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
    printf("���p�X�y�[�X��؂�Ő��l���R�A��������P���͂��Ă��������B");
}

void endcheck(void){
    char end[256];
    printf("\n\n�I������ɂ͕�������͂��Ă�������");
    scanf("%s",end);
}