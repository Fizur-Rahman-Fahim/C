#include<stdio.h>
int main()
{
    int line,i,j;
    scanf("%d",&line);
    for(i=1;i<=line;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
