#include <stdio.h>
 
int main(void){

	int a;
	char s[10];
 
    //  ���͏���
    
    printf("2800�ȏ�A5000�����̐�������͂��Ă�������\n");
    scanf("%d",&a);
    printf("10�����ȉ��̕��������͂��Ă�������\n");
    scanf("%s",s);
 
    //  �v�Z���� �o�͏���
    
    if (a >= 3200){
        printf("%s",s);
    }else{
        printf("red");
    }
    
    return 0;
}