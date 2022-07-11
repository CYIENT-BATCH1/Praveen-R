//Write program to check given i/p by user is alphabet or not alphabet using conditional operator.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet");
    scanf("%c",&ch);
    ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))?printf("alphabet"):printf("no alphabet");
}
