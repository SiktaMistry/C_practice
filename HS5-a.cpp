#include<stdio.h>
int main()
{
	int n; int num;
	int sum=0; int remainder;
	printf("Enter the number");
	scanf("%d",&n);
	num=n;
	while(num!=0){
		remainder=num%10;
		sum+=remainder;
		num/=10;
	}
	printf("The sum of Digit of %d is %d",n,sum);
	return 0;
}
