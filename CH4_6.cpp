#include<stdio.h>
int main()
{
	int i, n, sum=0;
	for(i=1;i<=10;i++){
		n=i*8;
		sum+=n;
	}
	printf("%d",sum);
	return 0;
}
