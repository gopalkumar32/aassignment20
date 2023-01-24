#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},*p=a,i,sum=0;
	for(i=0;i<5;i++)
	sum=sum+(*(p+i));
	printf("Sum of element of array =%d\n",sum);
	
	
	
}
