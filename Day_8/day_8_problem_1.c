//Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. 
//Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.
#include<stdio.h>
int flip(int x, int y) ///function 
{
int result; // varaible name 
int temp = (1<<y); //left shift the position of variable y  and store in temp
x = x^temp;// x value is "xor" with value stored in temp value and final value store in x
result = x; //x value is stored in result
return result;
}
int main() //driver main program
{
         int a, b;  // varaiable name
         printf("Enter value of a:\n"); // value get  from user as input
         scanf("%x",&a);
         printf("Enter value of b:\n");
         scanf("%x",&b);
         int res = flip(a,b);// function is called
         printf("%x", res); // printing the result
}
