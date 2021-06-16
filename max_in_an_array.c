//C program to find maximum in arr[] of size n
#include <stdio.h>
// C function to find maximum in arr[] of size n

int maximum(int arr[], int n)
{

    int i;
    // Initialize maximum element

    int max = arr[0];
    // Traverse array elements from second and
    // compare every element with current max  

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
 

int main()
{
    int arr[5],i;
    //Taking input from the user.
    printf("enter 5 numbers:");
    for (i=0;i<=4;i++)
    {
    scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", maximum(arr, n));
    return 0;
}
