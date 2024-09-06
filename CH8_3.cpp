#include<stdio.h>
#include<string.h>
int strlen(int a, char str[10]){
	while(str[a]!='\0'){
	a++;
	}
	return a;
} 

int main()
{
	int n;
	char str[10]="Hello";
	strlen(str);
	printf("The number of character in string is %d",strlen(n,str));
	return 0;
}
