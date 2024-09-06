#include<stdio.h>
int main()
{
int year;
printf("Eter a year\n");
scanf("%d",&year);
if(year%4==0){
	printf("This is leap year\n");
}
else{
	printf("This is not a leap year\n");
}
	return 0;
}
