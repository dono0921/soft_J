#include<stdio.h>
#include<stdlib.h>

int main(){

int miss;
FILE *fi;

	if(strcmp(answer,kotae)==0){
		prinf("正解\n");
	else{
		printf("不正解\n");
		fi=fopen("misslog.txt","a");		//間違えた問題を保存
		fprintf(fi,"%d",&i);
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
