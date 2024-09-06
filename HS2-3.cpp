#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	if(a>b){
		printf("The first number is greater than second number");
	}
	else if(a==b){
		printf("Both numbers are equal");
	}
	else{
	    printf("The second number is greater than first number");
	}
	return 0;
}
