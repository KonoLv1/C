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
    printf("�ЂƂ߂̐��l����͂��Ă�������\n");
    scanf("%d",&a);
    printf("�ӂ��߂̐��l����͂��Ă�������\n");
    scanf("%d",&b);
    printf("�傫�����l�� %d �ł�",max(a,b));
    return 0;
}