// 3. Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1 ; i<=n*2 ; i+=2)
    {
        sum=sum+i;
        printf("\n%d",i);
    }
    printf("\nsum of first %d odd numbers = %d",n,sum);

    return 0;
}