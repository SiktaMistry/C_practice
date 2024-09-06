#include<stdio.h>
int main()
{
	char str[30]; int i;
    gets(str);
    while(str[i]!='\0'){
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
    	    str[i]=str[i]-32;
		}
		else{
			str[i]=str[i];
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
