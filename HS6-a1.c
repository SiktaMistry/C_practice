#include<stdio.h>
int main()

{
	int n1; int *ptr1=&n1; 
	int n2; int *ptr2=&n2;
    printf("Enter the first number :\n");
    scanf("%d",ptr1);
    printf("Enter the second number :\n");
    scanf("%d",ptr2);
    if(n1<n2){
    	printf("%d is the Maximum number",*ptr2);
	}
	else if(n1>n2){
		printf("%d is the Maximum number",*ptr1);
	}
	else{
		printf("Both are equal");
	}
	return 0;
}
