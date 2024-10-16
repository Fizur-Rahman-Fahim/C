#include<stdio.h>
int main()
{
    int n , rem, rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int N=n;
    while(n!=0)
    {
    rem = n%10;
    rev = rev+rem;
    n=n/10;
    }
   printf("Sum of digit = %d",rev);
    return 0;
}

