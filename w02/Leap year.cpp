#include<stdio.h>

int main (){
	
	int year;
	
	printf("Enter year:");
	scanf("%d",&year);
	
	if ((year%4==0 and year%100!=0 ) or (year%400==0))
	printf("year %d is a leap year.",year);
	else
	printf("year %d is not a leap year.",year);
}
