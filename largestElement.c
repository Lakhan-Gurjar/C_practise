#include<stdio.h>

// Program to find largest element in array
// Here, arr[] is array and N is size of array
int largestElement(int arr[], int N)
{
    
    int max;
    printf("Enter Size of Array : %d", N);

    for (int i=0; i<N; i++)
    {
        scanf(" Enter Elements Of Array :\n", arr[i]);
    }

    for (int i=0; i<N; i++)
    {
        printf("Elements Of Array :\t", arr[i]);
    }

    arr[0] = max;

    for (int i=0; i<N; i++)
    {
        if (arr[i]>max)
        {
            arr[i] = max;
        }
    }
}

int main()
{
    int N;
    printf("Program to find largest element in  array\n");
    int Largest_Element;
    Largest_Element = largestElement(arr, N);
    return 0;
}