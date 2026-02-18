#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
{
    fact=fact*i;
    i++;

}
    printf("factorial=%d",fact);
    return 0;
    }