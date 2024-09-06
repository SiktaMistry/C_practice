#include<stdio.h>
int main()
{ int arr[10]={1,4,6,7,8,9,22,55,66,67};
	int *ptr=arr;
	printf("The reverse array is\n");
	for(int i=0;i<10;i++){
	printf(" %d\n",arr[9-i]);
}
	return 0;
}
