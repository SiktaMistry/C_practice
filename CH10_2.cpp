#include<stdio.h>
int main(){
	FILE *ptr;
	ptr= fopen("table.txt","w");
	int n, result;
	printf("Enter the value of n");
	scanf("%d",&n);
	fprintf(ptr,"The Multiplication Table of %d is:\n",n);
	for(int i=1;i<=10;i++){
		result = n*i;
		fprintf(ptr,"%d * %d = %d\n",n,i,result);
	}
	fclose(ptr);
	return 0;
}
