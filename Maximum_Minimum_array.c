//write c program to find Maximum and minimum elements in array
#include <stdio.h>
int main(){
    int max,min,n,arr[10],i;
    printf("Input the numberof elements to be stored in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element -%d:",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
       if(arr[i]>max)
    {
        max=arr[i];   
    }
       if(arr[i]<min)
    {
        min=arr[i];
    }

    }
    printf("Maximum elements in array are:%d ",max);
    printf("Minimum elements in array are:%d ",min);
    return 0;
}
// Input the numberof elements to be stored in array:4
// Element -0:56
// Element -1:23
// Element -2:10
// Element -3:59
// Maximum elements in array are:59 Minimum elements in array are:10