#include<stdio.h>
int main()
{
	int x; int i; int j=0;
	int arr[10];
	printf("Enter the number\n");
	scanf("%d",&x);
	for(i=0;i<10;i++){
	printf("Enter the value of number %d\n",i+1);
	scanf("%d",&arr[i]);
}
    for(i=0;i<10;i++){
    	printf("The value of arr[%d] is %d\n",i+1,arr[i]);
    	if(arr[i]==x){
    		j++;
		}
	}
	printf("The number of time %d occured is %d",x,j);
	return 0;
}
