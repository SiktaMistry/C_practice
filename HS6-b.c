#include<stdio.h>
int main()
{
	int temp; int i; int n;
	printf("Enter the number of numbers in array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	printf("Enter the value of %d\n",i+1);
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
	printf("The value of arr[%d] is %d\n",i+1,arr[i]);
}
if(n%2==0){
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}
else{
	for(i=0;i<=n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}
	for(i=0;i<n;i++){
	printf("The value of arr[%d] is %d\n",i+1,arr[i]);
}
	return 0;
}
