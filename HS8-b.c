#include<stdio.h>
#include<string.h>

int main()
{
	char str[100], result;
	int i, len; int max=0;
	int freq[200] = {0};
	printf("C Program to find maximum occuring character in a string :\n");
	printf("Enter the string :\n");
    gets(str);
	len = strlen(str);
	for(i=0;i<len;i++){
		freq[str[i]]++;
	}
	for(i=0;i<len;i++){
		if(max<= freq[str[i]]){
			max=freq[str[i]];
			result = str[i];
		}
	}
	printf("\nMaximum Occuring Character in a string %s is %c %d times ",str,result,max);
	return 0;
	}
