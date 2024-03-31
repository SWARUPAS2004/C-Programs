#include <stdio.h>
int main(){
    int i,n,arr[6],sum=0;
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
    
    for(i=1;i<=n;i++){
      
        sum=sum+arr[i];
    }
    printf("sum of the elements are:%d",sum);
}

// Print elements of array
// Input elemnst in the array:5
// Element of 1: 10
// Element of 2: 13
// Element of 3: 45
// Element of 4: 25
// Element of 5: 53
// Elements of array are:10 13 45 25 53 
// sum of the elements are:146