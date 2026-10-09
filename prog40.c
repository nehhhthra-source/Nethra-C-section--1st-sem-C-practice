#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("The largest is=%d",a);
	else if(b>a && b>c)
		printf("The largest is=%d",b);
	else
		printf("The largest is=%d",c);
	return 0;
}
