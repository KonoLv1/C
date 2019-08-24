#include<stdio.h>
#include<string.h>
int search(char a[256],char b[256],int x,int y);

int main(void){
	char text_data[256];
	char text_search[256];
	int data_len,search_len;	//文字数
	int count;
	
	printf("データとなる英文字を入力してください\n");
	scanf("%s",text_data);
	printf("探索する英文字を入力してください\n");
	scanf("%s",text_search);
	
	data_len = strlen(text_data);
	search_len = strlen(text_search);
	if (data_len < search_len){
		printf("探索対象の文字は存在しません");
	}else{
		count = search(text_data,text_search,data_len,search_len);
		if (count > 0){
			printf("探索対象の文字は　%d　コあります。",count);
		}else{
			printf("探索対象の文字は存在しません");
		}
	}
	return 0;
}

int search(char a[256],char b[256],int x,int y) {
    int i,j;
    int count = j = 0;
    for (i = 0; i < x; i++){
    	if(a[i] == b[j]){
    		if (j >= y - 1){
    			count++;
    			j = 0;
    		}else{
    			j++;
    		}
    	}
    }
    return count;
}
