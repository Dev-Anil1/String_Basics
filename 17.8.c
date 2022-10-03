#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string ");
    fgets(str,20,stdin);
    char s[20];
    int i;

    for(i=0;str[i];i++)
    {
        s[i]=str[i];
    }

    printf("%s",s);
    return 0;
}
