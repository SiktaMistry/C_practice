#include<stdio.h>
int main()
{
	int num, i;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=2;i==num;i++){
		num/i;
	}
	if(num%i!=0&&num%num==0){
		printf("The number is prime");
	}
	else{
		printf("The number is not prime");
	}
	return 0;
}
