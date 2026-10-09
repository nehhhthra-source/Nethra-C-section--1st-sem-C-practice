#include<stdio.h>
int main()
{ 
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("sal1=%d sal2=%d",a,b);
	c= ((b-a)*100)/a;
	printf("perc=%d",c);
	return 0;
}
