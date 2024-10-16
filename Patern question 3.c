#include<stdio.h>
int main()
{
    int line,i,j;
    scanf("%d",&line);
    for(i=line;i>0;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
