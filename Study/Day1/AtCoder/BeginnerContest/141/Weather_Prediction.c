#include<stdio.h>
int endcheck(void);
 
int main(void){

    char s[200001] = {};        //  ������
 
    //  ���͏���
    
    printf("Cloudy �� Rainy �� Sunny ����͂��Ă�������\n");
    scanf("%s",s);
 
    //  �v�Z����
    //  �o�͏���

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
    printf("\n\n�I������ɂ͕�������͂��Ă�������");
    scanf("%s",end);
    return 0;
}