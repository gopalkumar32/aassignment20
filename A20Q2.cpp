#include<stdio.h>
#include<string.h>
void swap(char **,char **);
int main()
{
        char *a[20],*b[20];
        printf("Entre the two string\n");
        gets(a);
        gets(a);
        swap(&a,&b);
        printf("%s%s",a,b);
}
void swap(char **x,char **y)
{
        char *temp;
        temp=*x;
        *x=*y;
        *y=temp;
}
