// 2. Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2 ; i<=n*2 ; i+=2)
    {
        sum=sum+i;
        printf("\n%d",i);
    }
    printf("\nsum of first %d even numbers = %d",n,sum);

    return 0;
}