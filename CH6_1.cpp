#include<stdio.h>
void printadd(int a){
	printf("The address of variable a is %u",&a)
}
int main()
{
int i;
printf("The address of i is %u\n",&i);
printadd(i);
printf("The address of variable i is %u\n",&i");
	return 0;
}
