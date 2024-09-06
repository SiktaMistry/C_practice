#include<stdio.h>
int main()
{
int physics, maths, chemistry, total;

printf("Enter physics marks");
scanf("%d",&physics);
printf("Enter maths marks");
scanf("%d",&maths);
printf("Enter chemistry marks");
scanf("%d",&chemistry);
total=(physics+maths+chemistry)/3;
if(physics>=33&&maths>=33&&chemistry>=33&&total>=40)
{printf("Pass");
}
else{
	printf("Fail");
}
	return 0;
}
