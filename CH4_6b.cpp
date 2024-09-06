#include<stdio.h>
int main()
{
	int num, i=0, factorial;
	printf("Enter the number");
	scanf("%d",&num);
	while(i<num){
		i++;
		factorial*=i;
	}
	printf("The factorial of the number is: %d",factorial);
	return 0;
}
