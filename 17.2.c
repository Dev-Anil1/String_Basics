#include<stdio.h>
int main()
{
    int i;
    char c;
    char str[12];
    printf("Enter string ");
    fgets(str,20,stdin);
    printf("Enter the character to search ");
    scanf("%c",&c);
    int count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("%d",count);
    return 0;
}
s
