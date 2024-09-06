#include<stdio.h>
int main()
{ 
int n=0;
int arr[10]={1,2,3,4,-1,-2,-3,5,8,9};
int *ptr=arr;
for (int i=0;i<10;i++){
    if(*(ptr+i)>=0){
    n++;}
}
printf("The number of positive integer in array is %d",n);
	return 0;
}
