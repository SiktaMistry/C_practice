#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("read_file.c","r");
	int num;
	printf("The three integers from the file are\n");
    fscanf(ptr,"%d",&num);
    printf("%d",&num);
	return 0;
}
