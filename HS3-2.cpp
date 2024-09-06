#include<stdio.h>
int main()
{
    int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n>=1&&n%1==0){
		printf("%d is a natural number",n);
	}
	else{
		printf("%d is not a natural number",n);
	}
	return 0;
}
