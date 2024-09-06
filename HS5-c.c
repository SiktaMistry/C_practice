#include<stdio.h>

void comp(int a, int b){
	if(a>=b){
		printf("HOT");
	}
	else{
		printf("COLD");
	}
}

int main()
{
	float temp; float t=25;
	printf("Enter the temperature\n");
	scanf("%f",&temp);
	comp(temp, t);
	return 0;
}
