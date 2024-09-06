#include<stdio.h>

struct vector{
	int x;
	int y;
};

int main()
{
	struct vector v1, v2;
	v1.x=21;
	v1.y=32;
	v2.x=11;
	v2.y=22;
	printf("X dim is %d and Y dim is %d of v1",v1.x,v1.y);
   	printf("X dim is %d and Y dim is %d of v2",v2.x,v2.y);
	return 0;
}
