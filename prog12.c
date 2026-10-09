#include<stdio.h>
int main()
{
	int a,b,res=0;
	scanf("%d %d", &a,&b);
	printf("add=%d\n",res=a+b);
	scanf("%d %d", &a,&b);	
	printf("sub=%d\n", res=a-b);
	scanf("%d %d", &a,&b);
	printf("div=%d\n", res=a/b);
	scanf("%d %d" , &a,&b);
	printf("mod=%d\n",res=a%b);
	scanf("%d %d" , &a,&b);
	printf("mul=%d\n",res=a*b);
	return 0;
}
