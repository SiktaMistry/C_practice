#include<stdio.h>

typedef struct complex{
	int real;
	int imaginary;
}comp;

void display(comp c);

int main()
{
    comp num[5];
	for(int i=0;i<5;i++){
		printf("Enter the real value of num%d\n",i+1);
		scanf("%d\n",&num[i].real);
		printf("Enter the imaginary value of num%d\n",i+1);
		scanf("%d\n",&num[i].imaginary);	
	}
	for(int i=0;i<5;i++){
	display(num[i]);
	
	}	
	return 0;
}
void display(comp c){
		printf("The real value is %d\n",c.real);
		printf("The imaginary value is %d\n",c.imaginary);	
}
