#include<stdio.h>
#include<stdlib.h>

int main(){

struct data{
int i;
char answer[200],kotae[200],eibun[200];
FILE *fi;

	if(strcmp(answer,data[i].kotae)==0){
		prinf("正解\n");
	else{
		printf("不正解\n");
		fi=fopen("misslog.txt","a");		//間違えた問題を保存
		fprintf(fi,"%s",&data[i].eibun);
		fclose(fi);
	}else{
		printf("正解です");
	}
}

void misslog(){
	FILE *fi,*fo;
	char misseibun,kotae,answer2;

	fi=fopen("misslog.txt","r");			//間違えた問題を表示
		for(;;){
		fgets(misseibun,40,fi);
		puts(misseibun);
		scanf("%s",answer2);
		
		if(strcmp(kotae,answer2)==0){
			prinf("正解です");
			fo=fopen("misslog.txt","w");
			for(i=0;i<200;i++) fprintf(fo,"%d",&i+1);
		}else{
			printf("間違ってます");
		}
		}
		fclose(fi);
		fclose(fo);
}
