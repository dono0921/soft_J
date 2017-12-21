#include<stdio.h>
#include<stdlib.h>

int main(){

int miss;
FILE *fi;

	if(miss==1){
		printf("間違ってます");
		fi=fopen("misslog.txt","a");		//間違えた問題を保存
		fprintf(fi,"%d",&i);
		fclose();
	}else{
		printf("正解です");
	}

void misslog(){
	FILE *fi;

	fi=fopen("misslog.txt","r");
		for(;;){
		c=fgetc(fi);
		if(c==EOF) exit[1];
		printf()
		}
