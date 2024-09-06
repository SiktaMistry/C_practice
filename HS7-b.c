#include<stdio.h>
int main()
{
	int n; int arr[n]; int i;
	printf("Enter the number of numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value of %d number",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
	if(arr[0]<arr[i]){
		arr[0]=arr[i];
	}
}
    printf("The largest number in the array is %d",arr[0]);
	return 0;
}
