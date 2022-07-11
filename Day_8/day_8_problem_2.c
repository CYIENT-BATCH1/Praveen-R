//Write a program in C to sort an array using Pointer.
#include <stdio.h>
void main() // function with no return 
{
   int *a,i,j,tmp,n; //initiated the varaible name and one pointer varaiable
    printf(" Input the number of elements to store in the array : ");  // geting the value from user as input
   scanf("%d",&n);
   printf(" Input %d number of elements in the array : \n",n); // geting the value of array
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i); //printing the element of array
	  scanf("%d",a+i);
	  }   
   for(i=0;i<n;i++) //using the for loop
   {
    for(j=i+1;j<n;j++) // taking j for sorting the lower to higher
    {
       if( *(a+i) > *(a+j)) // if its satisfy the statement
       {
      tmp = *(a+i); 
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   } // swap the number is its true swap to lesser to higher if it not its will be not swap and move to next value 
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++) 
      {
	  printf(" element - %d : %d \n",i,*(a+i)); //print the sorting array
	  }         
printf("\n");
}
