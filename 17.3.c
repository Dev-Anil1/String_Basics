#include<stdio.h>
#include<string.h>
int main()
{
    int j;
    char str[20];
    char ch;
    printf("Enter string ");
    fgets(str,20,stdin);

    int count=0;
    for(j=0;str[j];j++)
    {
        ch=str[j];
        if(ch=='a' || ch=='e' || ch=='i' ||ch== 'o' ||ch== 'u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
            count+=1;
    }

    printf("total vowel is %d",count);
    return 0;
}
