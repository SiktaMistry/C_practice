#include<stdio.h>

void function(int i);
int main()
{
	int i;
	printf("The address of i is %u",&i);
	function(i);
	return 0;
}
void function(int i){
	
	printf("The address i is %u",&i);
}
