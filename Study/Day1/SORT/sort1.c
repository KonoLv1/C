#include <stdio.h>

void main (void){
    int x[256];
    int i,j,count,tmp;
    /*
    i,j     :   ���[�v����p
    count   :   ���͂��鐔�l�̐�
    tmp     :   �ꎞ�ۊǗp
    */

    //  ���͏����i�����Ő��l�̓��͂��s���j
    printf("���בւ��鐔�l�͂�������܂����H�F");
    scanf("%d",&count);
    printf("���בւ��鐔�l�𔼊p�X�y�[�X������Ȃ�����͂��Ă��������F");
    for(i = 0; i < count; i++){
        scanf("%d",&x[i]);
    }

    //  �v�Z�����i�����Ő��l�̕��בւ����s���j
    for(i = count - 1; i >= 1; i--){
        for (j = i - 1; j >= 0; j--){
            if (x[i] < x[j]){
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }

    //  �o�͏����i�����ŕ��בւ������l�̏o�͂��s���j
    for(i = 0; i < count; i++){
        printf("%d",x[i]);
    }
}