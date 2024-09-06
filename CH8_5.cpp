#include<stdio.h>

void strcpy(char *st1, char *st2){
for(int i=0;i<10;i++){
   st1[i] = st2[i];
}	
}

int main()
{
	char st1[10]="Hello";
	char st2[10]="Enter";
	strcpy(st1,st2);
	printf("%s",st1);
	return 0;
}
