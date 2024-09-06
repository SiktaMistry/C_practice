#include<stdio.h>
void encrypt(char *st){
	char *ptr = st;
	while(*ptr!='\0'){
	*ptr = *ptr + 1;
	ptr++;	
	}
}
decrypt(char *st){
	char *ptr = st;
	while(*ptr!='\0'){
		*ptr = *ptr - 1;
		ptr++;
	}
}
int main()
{
	char st[30];
	gets(st);
	printf("******Encryption******\n\n");
	encrypt(st);
	printf("%s\n\n",st);
	printf("******Decryption******\n\n");
	decrypt(st);
	printf("%s\n",st);
	return 0;
}
