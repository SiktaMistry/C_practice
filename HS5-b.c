#include<stdio.h>
#include<math.h>
int main()
{
	double num, squareroot;
	printf("Enter the number\n");
	scanf("%lf",&num);
	squareroot=sqrt(num);
	printf("The Square Root of %.2lf is %.2lf",num,squareroot);
	return 0;
}
