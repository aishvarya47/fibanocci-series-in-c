//c program to print a fibanocci series//
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("ENTER YOUR NUMBER:\n");
	scanf("%d",&num);
	int n1=0,n2=1,n3,i;
	printf("%d \n %d",n1,n2);
	for(i=0;i<num;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\n ",n3);
	}
	return 0; 
}
