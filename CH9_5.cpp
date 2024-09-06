#include<stdio.h>
struct complex{
	int real;
	int imaginary;
};
int main()
{
	struct complex com1, com2;
	com1.real=5; com1.imaginary=4;
	com2.real=3; com2.imaginary=6;
	printf("real = %d ,imaginary = %d\n",com1.real,com1.imaginary);
	printf("real = %d ,imaginary = %d\n",com2.real,com2.imaginary);
	return 0;
}
