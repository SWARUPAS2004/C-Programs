//Write a program in C to read n number of values in an array and display them in reverse order.
#include <stdio.h>
int main(){
    int i,n,arr[6];
    printf("Print elements of array");
    printf("\nInput elemnst in the array:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Element of %d: ",i);
        scanf("%d",&arr[i]);

    }
    printf("Elements of array are:");
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    printf("Elements of array in reverse order are:");
    for(i=n;i>=1;i--){
        printf("%d ",arr[i]);
    }
}
// Print elements of array
// Input elemnst in the array:5
// Element of 1: 7
// Element of 2: 9
// Element of 3: 8
// Element of 4: 6
// Element of 5: 4
// Elements of array are:7 9 8 6 4 
// Elements of array in reverse order are:4 6 8 9 7 

