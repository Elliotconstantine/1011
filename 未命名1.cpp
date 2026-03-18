#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#define maxn 100
#define minn 1
#define maxt 7
int makenumber(void)
{
	int number;
	number=(rand()%(maxn-minn+1))+minn;
	assert(number >= minn && number <= maxn);
	return number;
}
void gus(int number)
{
	int guess;
	int times=0;
	assert(number >= minn && number <= maxn);
	do{
		times++;
		printf("回合 %d:",times);
		scanf("%d",&guess);
		while (getchar()!='\n')
		{
			;
		}
		if(guess>number)
		{
			printf("你猜的偏高了.\n");
		}
		else if(guess<number)
		{
			printf("你猜的偏低了.\n");
		}
	}while(guess!=number && times<maxt);
	if(guess == number)
	{
		printf("你成功了\n");
	}
	else
	{
		printf("对不起，猜测次数过多，失败了\n");
	}
}
int main(void)
{
	int number;
	int cont;
	srand(time(NULL));
	do{
		number=makenumber();
		gus(number);
		printf("是否继续（y/n):");
		cont=getchar();
		while(getchar()!='\n')
		{
			;
		}
	}while(cont != 'n' && cont != 'N');
	return 0;
	
}
