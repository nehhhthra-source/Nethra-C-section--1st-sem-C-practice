#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age>=18)
	{
		if(age>=60 && age<100){
			printf("ground floor");}
		else{
			printf("first floor");}
	}
	else{
		printf("go watch tv");}
}

//nested if
