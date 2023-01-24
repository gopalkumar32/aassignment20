#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Entre the value of A and B\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Value of A=%d\n Value of B=%d\n",a,b);
}
void swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
