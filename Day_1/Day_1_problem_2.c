//Take a 6-digit number as input from the user and reverse the number. Make sure that the number does not include a ‘0’ in any of its digits.

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
        printf(" %d",remainder);
        //reverse=reverse*10+remainder;
        n/=10;
        
    }
Consider a character input and find its ASCII value. 


#include <stdio.h>
int main()
{
    char c = 'p';
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}
  
