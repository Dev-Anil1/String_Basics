#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[20];
    printf("Enter string ");
    gets(str);
    char freq[150]={0};
    for(i=0;str[i];i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
            printf("%c==>%d\n",i,freq[i]);
    }
    return 0;

}

