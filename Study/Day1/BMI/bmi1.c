#include<stdio.h>
int endcheck(void);

int main (void){

    double hight,weight;
    printf("�얞�w�����v�Z���܂�\n�g������͂��Ă�������\n");
    scanf("%lf",&hight);
    printf("�̏d����͂��Ă�������\n");
    scanf("%lf",&weight);
    hight = hight / 100;
    printf("���Ȃ���BMI�́@%2.2lf�@�ł��B",weight / (hight * hight));
    endcheck();
    return 0;
}

int endcheck(void){
    char end[256];
    printf("\n\n�I������ɂ͕�������͂��Ă�������");
    scanf("%s",end);
    return 0;
}