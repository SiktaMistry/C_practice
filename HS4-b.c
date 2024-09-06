#include<stdio.h>
int main()
{
	int n; int i; int temp=0;
	printf("Enter the number");
	scanf("%d",&n);
	if(n==0||n==1){
		temp=1;
	}
	for(i=2;i<=(n/2);++i){
		if(n%i==0){
			temp=1;
			break;
		}
	}
	if(temp==0){
		printf("The number %d is a PRIME NUMBER",n);
	}
	else{
		printf("The number %d is NOT A PRIME NUMBER",n);
	}
	return 0;
}
