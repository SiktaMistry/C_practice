#include<stdio.h>
int main()
{
	int arr[30]; int n;
	int value;  int i;
	 printf("Enter the number of numbers\n");
	 scanf("%d",&n);
	 arr[n];
	 for(i=0;i<n;i++){
	 	printf("Enter the value of %d number\n",i+1);
	 	scanf("%d",&arr[i]);
	 }
	 for(i=0;i<n;i++){
	 	printf("The value of [%d] is %d\n",i+1,arr[i]);
	 }
	 printf("Enter the number you want to enter\n");
	 scanf("%d",&value);
	 arr[n]=value;
	 for(i=0;i<=n;i++){
	 	printf("The new value of [%d] is %d\n",i+1,arr[i]);
}
	return 0;
}
