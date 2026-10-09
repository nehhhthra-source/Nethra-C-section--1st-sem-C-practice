#include<stdio.h>
int main()
{	
	int a,b,c,r,sp=0,cp=0,prof=0,perc=0;
	scanf("%d %d %d %d",&a,&b,&c,&r);
	sp=a*b;
	cp=a*c;
	prof=sp-cp;
	perc=cp-r;
	printf("%d", perc);
	return 0;
}
