#include<stdio.h>
int prime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n1; int n2;
	int n; int i;
	printf("Enter the first number\n");
	scanf("%d",&n1);
	printf("Enter the second number\n");
	scanf("%d",&n2);
	printf("The prime numbers between %d and %d are :",n1,n2);
	for(i=n1;i<=n2;i++){
		if(prime(i)){
			printf("%d  ",i);
		}
	}
	
	return 0;
}
