#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c)
		printf("The smallest is=%d",a);
	else if(b<a && b<c)
		printf("The smallest is=%d",b);
	else
		printf("The smallest is=%d",c);
	return 0;
}
