#include<stdio.h>
int main()
{
	char str[20];
	char c;int i=0;
	printf("Enter the string");
	while(c!='\n'){
		scanf("%c",&c);
		str[i]=c;
		i++;
	}
	str[i]='\0';
	printf("%s",str);
	return 0;
}
