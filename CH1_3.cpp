#include<stdio.h>
int main()
{
int n; int a=97;
printf("enter a number\n");
scanf("%d",&n);
printf("Divisibility test returs: %d\n",n%97);
if(n%97==0){
	printf("the number is divisible by 97");ww
}
else{
	printf("the number is not divisible by 97");
}
return 0;
}
