#include<stdio.h>

int factorial(int a){
if(a<=1){
return 1;
}
else{
	return a*factorial(a-1);
}
}

int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("The factorial of the number %d is %d",n,factorial(n));
	return 0;
}
