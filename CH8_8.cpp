#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="HelloworldWassup";
	char n;
	int c=0;
	printf("Enter the character\n");
	scanf("%c",&n);
	for(int i=0;i<16;i++){
	if(str[i]==n){
		c++;
	}	
	}
	printf("The number of %c prestent in the string is %d",n,c);
	return 0;
}
