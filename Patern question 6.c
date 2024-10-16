#include <stdio.h>
int main()
{
    int space,row ,col,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=n;space>row;space--)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
