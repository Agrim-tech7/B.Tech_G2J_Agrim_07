#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter two operands");
    scanf("%d%d",&a,&b);
    printf("enter an operation(+,-,*,/)");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
    printf("addition=%d",a+b);
        break;
        case '-':
    printf("subtraction=%d",a-b);
        break;
        case '*':
        printf("multiplication=%d",a*b);
        break;
        case '/':
        if (b==0)
        printf("division cant be performed");
        else
        printf("division=%f",(float)a/b);
        break;
    default:
    printf("incorrect input");
        break;
    }
    return 0;
}