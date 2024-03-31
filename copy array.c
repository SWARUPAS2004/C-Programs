// program in C to copy the elements of one array into another array
#include <stdio.h>
int main(){
    int i,n,arr1[6],arr2[6];
    printf("Print elements of array");
    printf("\nInput elemnst in the array:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Element of %d: ",i);
        scanf("%d",&arr1[i]);

    }
    for(i=1;i<=n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("The elements stored in the first array are:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr1[i]);
        
    }
    printf("\n");
    printf("The elements copied into the second array are:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr2[i]);
        
    }
    
}
// Print elements of array
// Input elemnst in the array:5
// Element of 1: 45
// Element of 2: 89
// Element of 3: 23
// Element of 4: 10
// Element of 5: 32
// The elements stored in the first array are:45 89 23 10 32 
// The elements copied into the second array are:45 89 23 10 32