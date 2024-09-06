#include<stdio.h>
int main()
{
	FILE *ptr1;
	FILE *ptr2;
	ptr1= fopen("Cfile.txt","r");
	ptr2= fopen("double_integer.txt","w");
	int num; int result;
	fscanf(ptr1,"%d",&num);
	result=num*2;
	fprintf(ptr2,"%d",result);
	fclose(ptr1);
	fclose(ptr2);
	return 0;
}
