//Write a program to do binary search in a sorted array. 
//Program should take input of sorted values and search value. (Make number of elements as configurable value)
#include<stdio.h>
int main() // main program
{
   int c, first, last, middle, n, search, array[100];  // initialize the variable
   printf("Enter number of elements:\n");   // geting all the inputs from the user
   scanf("%d",&n);
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;            // it is the array first position
   last = n - 1;         // its is last postion of array (elements - 1 ) to get position
   middle = (first+last)/2;  // its the middle postion of array
   while (first <= last) {   //first postion is lesser than last then its enter to loop
      if (array[middle] < search)  // if array middle postion is lesser than search ist increase tha value 1 
         first = middle + 1;
      else if (array[middle] == search) { // if ist equal to middle 
         printf("%d is present at index %d.\n", search, middle+1); // middle + 1 is index of search value
         break;
      }
      else
         last = middle - 1; // decrese the postion
      middle = (first + last)/2;
   }
   if (first > last) //its greater than last its shows not found
      printf("Not found! %d is not present in the list.\n", search);
return 0;
}

