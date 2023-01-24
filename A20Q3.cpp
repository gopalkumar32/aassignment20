#include<stdio.h>
void swap(int *,int);
int main()
{
        int a[]={1,9,1,2,3,8,4,7,6,5},i;
        swap(a,10);
        printf("Sorting of arry using pointer\n");
        for(i=0;i<10;i++)
        printf("%d",a[i]);
}
void swap(int *a,int size)
{
        int i,j,temp;
        for(i=0;i<10;i++)
        {
                for(j=i;j<10;j++)
                {
                        if(a[i]>a[j])
                        {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        }
                }
        }
}
