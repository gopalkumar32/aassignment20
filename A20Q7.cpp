#include<stdio.h>
#include<string.h>
int main()
{
        char c[]="Gopal";
        char *a=c;
        int i,count=0,f;
        for(i=0;i<5;i++)
        {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u');
                 {
                         count++;
                 }
                f=5-count;
        }
                printf("Total vowel is %d\n",count);
                printf("Total consonants is %d",f);
}
