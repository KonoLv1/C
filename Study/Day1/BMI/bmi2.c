#include<stdio.h>
int class(double date);
int endcheck(void);

int main (void){

    double hight,weight,date;
    printf("�얞�w�����v�Z���܂��B�g������͂��Ă�������\n");
    scanf("%lf",&hight);
    printf("�̏d����͂��Ă�������\n");
    scanf("%lf",&weight);
    hight = hight / 100;
    date = weight / (hight * hight);
    class(date);
    endcheck();

    return 0;
}

int class(double date){
    printf("���Ȃ���BMI�́@%2.2lf�@�ŁA���茋�ʂ́y ",date);
    if (date < 16){
        printf("��������");
    }else if (date < 17){
        printf("�����̑̏d");
    }else if (date < 18.5){
        printf("�����C���̑̏d");
    }else if (date < 25){
        printf("���ʂ̑̏d");
    }else if (date < 30){
        printf("�얞�ɂȂ肩���̑̏d");
    }else if (date < 35){
        printf("�얞�i�P�x�j");
    }else if (date < 40){
        printf("�얞�i�Q�x�j");
    }else{
        printf("�얞�i�R�x�j");
    }
    printf(" �z�ł��B");
    return 0;
}

//  ��������͑���s�v   //

int endcheck(void){
    char end[256];
    printf("\n\n�I������ɂ͕�������͂��Ă�������");
    scanf("%s",end);
    return 0;
}

//  �����܂ł͑���s�v   //

/* Inftomation 

������WHO�i���E�ی��@�\�j�̔얞�x�������g�p

�y�Q�lURL�Fwikipedia�z
https://ja.wikipedia.org/wiki/%E3%83%9C%E3%83%87%E3%82%A3%E3%83%9E%E3%82%B9%E6%8C%87%E6%95%B0

*/
