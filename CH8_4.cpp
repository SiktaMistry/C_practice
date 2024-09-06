#include<stdio.h>

void slice(int a, int b, char *st){
int i=0;
while ((a+i)<b){
st[i]= st[i+a];
i++;
}	
st[i]= '\0';
}

int main()
{
	char st[]="Helloworld";
	int m; int n;
	printf("Enter the value of m:\n");
	scanf("%d",&m);
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	slice(m, n, st);
	printf("%s",st);
	return 0;
}
