#include<stdio.h>
int main()
{
    int count=0,count1=0,count2=0,count4=0,i;
    char c[20];
    printf("Enter the string here ");
    fgets(c,20,stdin);
    char ch;
    for(int i=0;c[i];i++)
    {

        if(c[i]>='A' && c[i]<='Z' )
            count++;
        else if(c[i]>='a' && c[i]<='z')
            count1++;
        else if(c[i]>='0' && c[i]<='9')
            count2++;
        else
            count4++;
    }
    if(count>0)
        printf("%d no of uppercase\n",count);
    if(count1>0)
        printf("%d no of lowercase\n",count1);
    if(count2>0)
        printf("%d no of digits\n",count2);
    if(count4>0)
        printf("%d no of specialcharacter\n",count4);
    return(0);

}
