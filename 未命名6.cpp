#include<stdio.h>
#include<string.h>
int main(){
	struct STU{
		char name[10];
		int score;
	};
	struct STU stu[5]={
		{"lihua"},
		{"limin"},
		{"litao"},
		{"lisu"},
		{"liji"},
	};
	for(int i=0;i<5;i++){
		int n=0;
		scanf("%d",&n);
		stu[i].score=n;

	}
	for(int i=0;i<5;i++){
		printf("%s %d\n",stu[i].name,stu[i].score);
	}

}
