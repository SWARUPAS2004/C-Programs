//Write a program in C to separate odd and even integers into separate arrays.
#include <stdio.h>
int main(){
    int arr1[10],i,j=0,k=0,n,arr2[10],arr3[10];
    printf("Input the elements you want print in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elements - %d:",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]% 2==0){
            arr2[j]=arr1[i];
            j++;
        }

        else{
            arr3[k]=arr1[i];
            k++;
        }
    }
    printf("\nEven numbers in array are:");
    for(i=0;i<j;i++){
        printf("%d,",arr2[i]);
    }
    printf("\nOdd numbers in array are:");
    for(i=0;i<k;i++){
        printf("%d,",arr3[i]);
    }
    return 0;
}
//Input the elements you want print in array:5
// Elements - 0:12
// Elements - 1:23
// Elements - 2:45
// Elements - 3:56
// Elements - 4:78

// Even numbers in array are:12,56,78,
// Odd numbers in array are:23,45,