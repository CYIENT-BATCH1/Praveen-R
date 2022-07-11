//Find common elements in three sorted arrays, 3 array values are given as input to program.
#include<stdio.h>
int main(){ // main program
    int ar1[] = { 10,90,50,20,5,4};  // initialize the value of array 
    int ar2[] = { 50,54,20,7,5,4 };
    int ar3[] = { 10,50,20,5,4};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);  // to known the size of array 
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) { // to know the which of value is same in 3 array
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) { // if the value are same
            printf("%d ", ar1[i]); //printing the array i
            i++;                    // and see whereas the another value are same so increament the i
            j++;
            k++;
        }
        else if (ar1[i] > ar2[j]) // else n1 and n2 only has the same number
            i++;
        else if (ar2[j] >ar3[k]) // else n2 and n3 only has the same number
            j++;
        else
            k++;
    }


   printf("Common Elements are "); // printing the commom value of n1 ,n2 and n3

    return 0;
}
