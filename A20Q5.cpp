#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	scanf("%d%d",&a,&b);
	*p=a;
	*q=b;
	printf("Maximum number is %d",(*p>*q?p:q));
}
