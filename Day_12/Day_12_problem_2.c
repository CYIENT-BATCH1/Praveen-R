//Find empty strings in an array of strings (Array of strings will be given as input to program) and 
//print the position of array where empty string is present. And replace the empty string array element as “CYIENT”
#include <stdio.h>
#define size 5  // defined the macros 
int main(){ // main program
    char *arr[size] = {"red","green", " ","brown","black"};
    int pos=0; 
    int i;
    for(i=0;i<size;i++){    

        if(arr[i]==" "){  // if the array in which has space 
            arr[i]="Cyient";  // space should be filled with cyient
            pos=i; // to known the which Position the cyient is filled
        }
        printf("%s\n",*(arr+i)); //print all char of array
    }
     printf("Position = %d\n",pos); //print the Position of cyient
    return 0;
}
