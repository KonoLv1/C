#include<stdio.h>

int main(void){

    FILE *file;
    file = fopen("test2.txt","w");
    fprintf(file,"Hello World 2019");
    fclose(file);
    return 0;

}

/*  INFOMATION */
/*

◆このプログラムの動作
文字が書かれた test2.txtというファイルを生成する。

◆ファイル型ポイント変数のモード一覧
・r     読み込み（ファイルが存在しない場合は失敗となる）
・r+    読み書き（ファイルが存在しない場合は失敗となる）
・w     書き込み（ファイルが存在しても空のファイルを作る）
・w+    読み書き（ファイルが存在しても空のファイルを作る）
・a     追加書き込み（ファイルが存在しない場合は作成される）
・a+    読み書き（ファイルが無い場合は作成される）

*/