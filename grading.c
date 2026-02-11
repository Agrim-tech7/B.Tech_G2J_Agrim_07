#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float sum,per;
    printf("enter the marks of subject a,b,c,d,e=");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=sum/5;
if(per>=90 && per<=100)
{
    printf("GRADE A");

}
else if (per>=80 && per<=90)
{
 printf("GRADE B");
  
}
return 0;
}