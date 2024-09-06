#include<stdio.h>
int main()
{
	int arr[3][10];
	printf("The Multiplication Table of 2 is \n");
	for(int i=0;i<10;i++){
		arr[0][i]=2*(i+1);
		printf("2 * %d = %d\n",(i+1),arr[0][i]);
	}
	printf("The Multiplication Table of 7 is \n");
	for(int i=0;i<10;i++){
		arr[1][i]=7*(i+1);
		printf("7 * %d = %d\n",(i+1),arr[1][i]);
	}
	printf("The Multiplication Table of 9 is \n");
	for(int i=0;i<10;i++){
		arr[2][i]=9*(i+1);
		printf("9 * %d = %d\n",(i+1),arr[2][i]);
	}
	return 0;
}
