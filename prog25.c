#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", a>5&&b<20);
	printf("%d\n", a>=4&&b<17);
	printf("%d\n", a<=3||b>=4);
	printf("%d\n", a<4||b>2);
	return 0;
}
