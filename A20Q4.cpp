#include<stdio.h>
#include<string.h>
int main()
{
        char str[]="Gopal";
        char *s=str;
        for(int i=4;i>=0;i--)
        printf("%c",s[i]);
}
