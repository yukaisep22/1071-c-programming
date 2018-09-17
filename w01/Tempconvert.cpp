#include <stdio.h>

int main(){
	float F, C;
	printf("Enter the temperature in F:");
	scanf("%f",&F );
	C=(F-32)*5/9;
	printf("%.1f F = %.1f C", F,C);
}

/*
Enter temperature in C:20.5
20.5C=68.9F
Enter temperature in F:80.5
80.5F=26.9C
*/
