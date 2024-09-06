#include<stdio.h>
int main()
{
int income;
float incometax;
printf("Put your income here:\n");
scanf("%d",&income);
if(income<50000){
	incometax=0;
	printf("Your income tax is %f\n",incometax);
}
else if(income>=50000&&income<=250000){
	incometax=income*5/100;
	printf("Your income tax is %f\n",incometax);
}
else if(income>250000&&income<500000){
incometax=income*10/100;
printf("Your income tax is %f\n",incometax);}
else if(income>=500000&&income<=1000000){
	incometax=income*20/100;
	printf("Your income tax is %f\n",incometax);
}
else{
	incometax=income*30/100;
	printf("Your income tax is %f\n",incometax);
}
	return 0;
}
