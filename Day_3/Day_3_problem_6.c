//Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift.
#include <stdio.h>

int main()
{
 int n=0xEF;             //read hex val as input
 int b=0xEF>>1;           //hex value right shift by bit
 printf("%x",b);          
}
