#include<stdio.h>
struct vector{
	int x;
	int y;
};
int sum(int a, int b);

int main()
{
struct vector v1, v2, vsum;
v1.x=11; v1.y=22;
v2.x=31; v2.y=24;
vsum.x=sum(v1.x, v2.x); vsum.y=sum(v1.y,v2.y);
printf("X dim is %d and Y dim is %d",vsum.x,vsum.y );

	return 0;
}
int sum(int a, int b){
	int result;
	result= a+b;
	return result;
}
