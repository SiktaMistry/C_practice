#include<stdio.h>

int main(){
	int i=6;
	int *j;
	int **k;
	j=&i;
	k=&j;
	printf("The value of i is %d",**k);
	return 0;
}
