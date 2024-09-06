#include<stdio.h>
struct code{
	int num;
};
int main()
{   int ptr; int n1
	struct code *ptr;
	ptr=&n1;
	n1.num=22; 
	printf("The value of code 2 is %d",(*ptr).num);
	printf("The value of code 2 is %d",prt->num);
	return 0;
}
