#include<stdio.h>
int main()
{
	int a=5;
	printf("%d\n", a++);  //5 //6  
	printf("%d\n", ++a);  //7 //7
	printf("%d\n", a--);  //7 //6
	printf("%d", --a);  //5 //5
}
