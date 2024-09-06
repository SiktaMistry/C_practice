#include<stdio.h>

int sum(int a);

int main()
{int n;
printf("Enter the number of natural numbers");
scanf("%d",&n);
printf("The sum of first %d number is %d",n,sum(n));
return 0;
}

int sum(int a){
	if(a>=1){
	return a+sum(a-1);
}
}


