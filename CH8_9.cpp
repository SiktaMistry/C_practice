#include<stdio.h>
int main()
{
 char str[20]="helloworld";
 char c; char s;
 int i; 
 
 printf("Enter the character");
 scanf("%c",&c);
 while(s!='\0'){
 	str[i]=c;
 	i++;
 }
 if(str[i]==c){
 	printf("The character %c is present in the string",c);
 }
 else{
 printf("The character %c is not present in the string",c);
}
	return 0;
}
