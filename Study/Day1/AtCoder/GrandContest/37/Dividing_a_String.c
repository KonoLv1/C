#include <stdio.h>
 
int main(void){
    int i,count;
    char s[200001] = {};        //  ������
    count = i = 0;
 
    //  ���͏���
    printf("������i�������A���t�@�x�b�g�j����͂��Ă��������@");
    scanf("%s",s);
 
    //  �v�Z����
    if (s[1] != '\0'){
        i = 1;
        while(s[i] != '\0'){
           if (s[i] == s[i - 1]){
               if (s[i + 1] == '\0'){
                    count = count + 1;
                    break;
               }else if (s[i + 2] == '\0'){
                    count = count + 2;
                    break;
               }else if(s[i + 3] == '\0'){
                    i = i + 1;
                    count = count + 3;
                    break;
               }else{
                    i = i + 3;
                    count = count + 2;
               }
           }else{
               if (s[i + 1] == '\0'){
                    count = count + 2;
                    break;
               }
                i = i + 1;
                count++;
           }
        }
    }else{
        count = 1;
    }
    //  �o�͏���
 
    printf("%d�̕�����ɕ����ł��܂�",count);
 
}