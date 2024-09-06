#include<stdio.h>
float converter(int a);
int main()
{float cel;
printf("Enter the celsius temperature\n");
scanf("%d",&cel);
printf("The fahreheit temperature is : %f\n",converter(cel));
	return 0;
}

float converter(int a){
	float fahr;
	fahr = (float)a*1.8+32;
	return fahr;
}

