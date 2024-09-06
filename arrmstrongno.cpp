#include<stdio.h>
int main()
{
	int num, remainder, originalnum, result=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0){
		remainder=originalnum%10;
		result+=remainder*remainder*remainder;
		originalnum/=10;
	}
	if(result==num){
		printf("The number is an Armstrong number\n");
	}
	else{
		printf("The number is not an Armstrong number\n");
	}
	return 0;
}
