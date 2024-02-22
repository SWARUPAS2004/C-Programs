//write a program to accept the postion from user and delete the element at that position from array 

#include <stdio.h>
int main()
{
    int array[15],position,i,n;
    printf("Enter number of elements want to insert in the array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position of element to be delected\n");
    scanf("%d",&position);

    if (position>=n-1)
    {
        printf("Deletion not posible.\n");
    }
    else{
        for(i=position-1;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
        printf("After deleting element at %d location the array is \n",position);
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",array[i]);
        }
    }
return 0;
}

//Enter number of elements want to insert in the array
// 3
// Enter 3 elements
// 1
// 2
// 3
// Enter the position of element to be delected
// 4
// Deletion not posible.

// Enter number of elements want to insert in the array
// 5
// Enter 5 elements
// 1
// 2
// 3
// 4
// 5
// Enter the position of element to be delected
// 4
// After deleting element at 5 location the array is 
// 1
// 2
// 3
// 5
