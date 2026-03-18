#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	int *p,*q;
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	swap(p,q);
	printf("a=%d,b=%d\n",a,b);
}
