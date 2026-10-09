#include<stdio.h>
int main()
{
	int perc;
	scanf("%d",&perc);
	if(perc<=100 && perc>=80)
		printf("Grade A");
	else if(perc<80 && perc>=60)
		printf("Grade B");
	else if(perc<60 && perc>=40)
		printf("Grade C");
	else if(perc<40 && perc>=27)
		printf("Grade D");
	else
		printf("Grade F");
	return 0;
}
