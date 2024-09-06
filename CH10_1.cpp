#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr= fopen("Cfile.txt","r");
    int num1, num2, num3;
	fscanf(ptr,"%d%d%d",&num1, &num2, &num3);
	printf("%d %d %d",num1,num2,num3);
	fclose(ptr);
	return 0;
}
