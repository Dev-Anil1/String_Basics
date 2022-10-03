#include<stdio.h>
int main()
{
    int i;
    char str[10]="Anil";
    for(i=0;str[i];i++);
    printf("Length is %d",i);
    return 0;
}
