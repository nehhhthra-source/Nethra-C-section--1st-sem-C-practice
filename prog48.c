#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	switch(c){
	case 1:printf("add=%d",a+b);
	break;
	case 2:printf("mul=%d",a*b);
	break;
	case 3:printf("sub=%d",a-b);
	break;
	case 4:printf("div=%d",a/b);
	break;
	case 5:printf("rem=%d",a%b);
	break;
	default:printf("Not 12345");
	break;}
}	


//switchhhcaseeee
