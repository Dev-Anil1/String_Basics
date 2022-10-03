#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int t,i,j;
    printf("Enter string to reverse ");
    fgets(str,20,stdin);

    for(i=0,j=strlen(str)-1;i<=j;i++,j--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }

    printf("after reverse %s",str);

    return 0;

}
