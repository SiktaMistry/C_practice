#include<stdio.h>
int main()
{
	int n1; int *ptr1=&n1;
	int n2; int *ptr2=&n2;
	printf("Enter the first number :\n");
	scanf("%d",ptr1);
	printf("Enter the second number :\n");
	scanf("%d",ptr2);
	printf("Maximum number between %d and %d is :\n",*ptr1,*ptr2);
	if(n1>n2){
		printf("%d",(*ptr1)-(*ptr2)-1);
	}
	else if(n1<n2){
		printf("%d",(*ptr2)-(*ptr1)-1);
	}
	else{
		printf("0");
	}
	return 0;
}
