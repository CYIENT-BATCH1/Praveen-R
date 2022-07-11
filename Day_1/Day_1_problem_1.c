//Find whether a given 10-digit number is palindrome or not.
#include <stdio.h>

int main()
{
    int number,remainder,n,reverse=0;
    printf("Enter the number");
    scanf("%d",&number);
    n=number;
    while(n!=0)
    {
        remainder=n%10;
        //printf(" %d",remainder);
        reverse=reverse*10+remainder;
        n/=10;
        
    }
   

    (reverse==number) ? printf(" its palidrome") : printf(" not palidrome");
       return 0;
    
}
