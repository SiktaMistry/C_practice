#include<stdio.h>
int main()
{
	int arr[3][10];
	int a, b, c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
		printf("Enter the value of b\n");
	scanf("%d",&b);
		printf("Enter the value of c\n");
	scanf("%d",&c);
    for(int i=0;i<10;i++){
    	arr[0][i]=a*(i+1);
    	printf("%d * %d = %d\n",a,(i+1),arr[0][i]);
	}
	for(int i=0;i<10;i++){
    	arr[1][i]=b*(i+1);
    	printf("%d * %d = %d\n",b,(i+1),arr[1][i]);
	}
	for(int i=0;i<10;i++){
    	arr[2][i]=c*(i+1);
    	printf("%d * %d = %d\n",c,(i+1),arr[2][i]);
	}
	return 0;
}
