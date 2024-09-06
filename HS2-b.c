#include<stdio.h>
int main()
{
	char chr;
	printf("Enter a character\n");
	scanf("%c",&chr);
	if(chr>='0'&&chr<='9'){
		printf("%c is a DIGIT",chr);
	}
	else{
		printf("%c is NOT A DIGIT",chr);
	}
	return 0;
}
