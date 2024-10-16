#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    printf("Enter a word : ");
    scanf("%s", &s1);
    strcpy(s2,s1);
    strrev(s1);


   int d= strcmp(s1,s2);

    if(d==0)
    printf("palindrome");
    else
        printf("not palindrome");

    getch();

}
