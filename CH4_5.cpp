#include<stdio.h>
int main()
{
	int i=0, sum=0, n=10;
	do{
		i++;
		sum+=i;
	}while(i<n);
	printf("The sum is : %d",sum);
	return 0;
}
