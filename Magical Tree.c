#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,count=0;
    scanf("%d",&n);

    for(int i=1; i<=21; i=i+2 )
    {
        if(i>n)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    int row ,col, m= 5+count;

    for(row=1;row<=m;row++)
    {
        for(col=1;col<=m-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row*2-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }


     for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            printf(" ");
        }
        for(col=1;col<=n;col++)
        {
            printf("*");
        }
        printf("\n");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
