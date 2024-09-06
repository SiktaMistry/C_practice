#include<stdio.h>

int fibonacci(int b);

int main()
{
	int n; int i;
	printf("Enter the number of term you need in the series\n");
	scanf("%d",&n);
	printf("The Fibonacci Series upto %d terms :\n",n);
	for(i=0;i<n;i++){
		printf("%d , ",fibonacci(i));
	}
	printf("%d",fibonacci(n));
	return 0;
	
}
int fibonacci(int b){
	if(b<=1){
		return b;
	}
	else{
		return fibonacci(b-1) + fibonacci(b-2);
	}
}
