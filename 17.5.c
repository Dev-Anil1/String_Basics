#include<stdio.h>
#include<string.h>

int main()
{
    char str[16];
    int i;
    printf("enter string ");
    fgets(str,15,stdin);

    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<= 90)
            str[i]+=32;
    }
    printf("%s",str);
    return 0;
}

