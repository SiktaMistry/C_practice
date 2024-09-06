#include<stdio.h>
int main()
{
	char c; int i;
	char *ptr=&c;
	for(i=65;i<=90;i++){
		c=i;
		printf("%c\n",*ptr);
	}
	return 0;
}
