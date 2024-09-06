#include<stdio.h>
int main()
{
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
if(ch>=97&&ch<=122){
	printf("The character is lowercase");
}
else{
	printf("The character is not lowercase");
}
	return 0;
}
