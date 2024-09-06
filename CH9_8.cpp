#include<stdio.h>
 typedef struct bankaccount{
	int accountno;
	int deposit;
	char *name[];
}bankacc;
int main()
{
	bankacc acc1, acc2;
	acc1.accountno=2; acc1.deposit=20000; acc1.(*name)="Rohan";
	acc2.accountno=1; acc1.deposit=30000; acc2.(*name)[20]="Rahul";
	printf("account no = %d , deposit = %d , name = %s\n",acc1.accountno,acc1.deposit,acc1.name);
	printf("account no = %d , deposit = %d , name = %s\n",acc2.accountno,acc2.deposit,acc2.name]);
	return 0;
}
