#include<stdio.h>
struct employee{
	char name[10];
	int salary;
};
int main()
{
	FILE *ptr;
	ptr = fopen("name_salary.txt","w");
	struct employee n1, n2;
	printf("Enter the name of employee 1\n");
	scanf("%s",n1.name);
	printf("Enter the salary of employee 1\n");
	scanf("%d",&n1.salary);
	printf("Enter the name of employee 2\n");
	scanf("%s",n2.name);
	printf("Enter the salary of employee 2\n");
	scanf("%d",&n2.salary);
	fprintf(ptr,"The name of employee 1 is %s and his salary is %d\n",n1.name,n1.salary);
	fprintf(ptr,"The name of employee 2 is %s and his salary is %d\n",n2.name,n2.salary);
	fclose(ptr);
	return 0;
}
