#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},*p=a,i;
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);
	printf("\nrverse of array using pointer\n");
	for(i=4;i>=0;i--)
	printf("%d\t",*(p+i));
}
