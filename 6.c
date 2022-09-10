// 6. Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=2 ; i<=n ; i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial of %d is %d",n,fact);

    return 0;
}