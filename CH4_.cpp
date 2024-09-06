#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(int i=1;i<=20;i++){
		printf("Multiplication table\n");
		printf("%d * %d = %d\n",n,i,n*i);
		
	}
	return 0;
}
