// count the total number of duplicate elements in an array
#include <stdio.h>

int main() {
    int n,i, j,arr[10],count=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elements of %d is:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
                break;
            }
        }
      
    }
   printf("Total number of duplicate elements found in the array: %d\n", count);  
  
    return 0;
}
// Input the number of elements to be stored in the array :5
// Elements of 0 is:2
// Elements of 1 is:2
// Elements of 2 is:6
// Elements of 3 is:6
// Elements of 4 is:5
// Total number of duplicate elements found in the array: 2