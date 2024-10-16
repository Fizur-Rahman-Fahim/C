#include <stdio.h>
int main()
{
    int space,row ,col,n;
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
       for(space=row;space<=n;space++)

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
