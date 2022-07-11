//Consider the weights of three people as user input. Find the heaviest among them and print it.

#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
    if (C >= A && C >= B)
        printf("%d is the largest number.", C);
   return 0;
}
