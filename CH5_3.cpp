#include<stdio.h>

int fibonacci(int a);

int main()
{
	int n;
	printf("Enter the number of element in the Fibonacci series");
	scanf("%d",&n);
	printf("The %d term of the fibonacci serie is: %d",n,fibonacci(n));
	return 0;
}

int fibonacci(int a){
	int nth= fibonacci(a-1)+fibonacci(a-2);
	return nth;
}
