#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],temp;
    int i,j,n;
    printf("Enter 10 numbers ");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("%s",a);
    return 0;
}
