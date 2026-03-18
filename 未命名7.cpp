#include<stdio.h>
int main(){
	int n=1;
	char cr[100];
	
	fgets(cr,sizeof(cr),stdin);
	char*ch=cr;
	
	while(*ch!='\n')
	{
		if(*ch==' ')
		{
			n++;
	    }
	    ch++;
	}
	printf("%d",n);
	return 0;
	
 } 
