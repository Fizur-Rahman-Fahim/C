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
    rev = rev*10+rem;
    n=n/10;
    }
    if(N==rev)
        {
            printf("It's a palindrome\n");
        }
    else
    {
        printf("It's not a palindrome\n");
    }
    return 0;
}
