#include<stdio.h>
#include<time.h>

int main(){
	srand(time(NULL));		//現在時刻の情報で初期化
	char eibun = rand() % count + 1;		//英文の1文目から全ての英文までの乱数を発生(countは英文の数)
	printf("%s,eibun");
}
