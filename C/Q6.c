#include<stdio.h>
int main()
{
    int a,b,sum=0;
     printf("Enter the number a:");
    scanf("%d",&a);
    int i=a;
    while(i>0)
    {
        b=i%10;
        sum=sum+b;
        i=i/10;
    }
    printf("The sum of single digit is%d",sum);
}
