#include<stdio.h>
typedef struct complex{
	int real;
	int imaginary;
}comp;
int main()
{
	comp com1, com2;
	com1.real=4; com1.imaginary=5;
	com2.real=3; com2.imaginary=6;
	printf("Real = %d , Imaginary = %d\n",com1.real,com1.imaginary);
	printf("Real = %d , Imaginary = %d\n",com2.real,com2.imaginary);
	return 0;
}
