#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    
    if(a>b)
{
    if (a>c){
    printf("\na is greatest");}
    }


else 
{
    if(b>c)
    {
        printf("\nb is greatest");
    }

else{
    printf("\nc is greatest");
}
}

return 0;
}