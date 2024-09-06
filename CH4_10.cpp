#include<stdio.h>
int main()
{
	int num, i=2;
	printf("Enter the number");
	scanf("%d",&num);
	while(i<num){
		i++;
		num/i;
	}
	if(num%i!=0&&num%num==0&&num%2==0){
		printf("The number is prime");
	}
	else{
		printf("The number is not prime");
	}
	return 0;
}
