#include<stdio.h>
int main()
{
	int l; int b;
	printf("Enter the length of the rectangle\n");
	scanf("%d",&l);
    printf("Enter the breadth of the rectangle\n");
	scanf("%d",&b);
	printf("The perimeter of the rectangle is %d",2*(l+b));
	return 0;
}
