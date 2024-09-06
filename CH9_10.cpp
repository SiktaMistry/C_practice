#include<stdio.h>

typedef struct date{
	int day;
	int month;
	int year; 
}date;

void display(date d){
	printf("The date is %d/%d/%d\n",d.day,d.month,d.year);
}

int datecomp(date d1, date d2){
	if(d1.year>d2.year){
		return 1;
	}
if(d1.year<d2.year){
		return -1;
	}
	if(d1.month<d2.month){
		return -1;
	}
if(d1.day>d2.day){
		return 1;
	}
	if(d1.day<d2.day){
		return -1;
}
return 0;
}

int main()
{
date d1 = {2, 11, 21};
date d2 = {5, 4, 22};
display(d1);
display(d2);
int a = datecomp(d1,d2);
printf("Date Comparison function return: %d",a);
return 0; 
}
