#include<stdio.h>
#include<string.h>

char *failecheck(char *faile);
int endcheck(void);

void main(void){
    char s[256];
    FILE *file;
    file = fopen("test3.txt","r");
    fscanf(file,"%s",&s);
    fclose(file);
    *failecheck(*file);
    printf("%s",file);
    endcheck();
}

char *failecheck(char *file){
    char *testcase = "null";

    if(strcmp(file,testcase) == 0){
        file = "????????";
    }
    return file;
}

int endcheck(void){
    char end[256];
    printf("\n\n?I??????????????????????????");
    scanf("%s",end);
    return 0;
}

/*  INFOMATION */
/*

??????v???O?????????
???????????? test2.txt??????t?@?C?????????B

???t?@?C???^?|?C???g???????[?h??
?Er     ??????i?t?@?C??????????????????s????j
?Er+    ???????i?t?@?C??????????????????s????j
?Ew     ????????i?t?@?C???????????????t?@?C???????j
?Ew+    ???????i?t?@?C???????????????t?@?C???????j
?Ea     ???????????i?t?@?C??????????????????????j
?Ea+    ???????i?t?@?C??????????????????j

*/