///Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)
include<stdio.h>
void sortelement(int arr[], int n){  // function declaration
    int i,j;  // initialize the varaiable
    if(n>0){
       int i,j,t;
     for(i=0;arr[i];i++){          // this is for to sor the element from small to big
    for(j=i+1;arr[j];j++){
        if(arr[i]>arr[j]){
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    }
}
}
int main(){
    int n=5,j;                              
    int arr[n];
    printf("Enter the Array Element:");             // get the all the input from user
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    sortelement(arr,n);
    printf("After sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)
     printf("%d ", arr[i]);
    return 0;
}
