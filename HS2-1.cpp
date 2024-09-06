#include<stdio.h>
int main()
{
	float a, b, c;
	float average;
	printf("Enter the value of the numbers\n");
	scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
	printf("The average of the three numbers is %f",average);
	return 0;
}
