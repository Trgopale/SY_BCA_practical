#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n], squares[n];
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        squares[i] = arr[i] * arr[i];
    }
    printf("Orignal array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Array of squares:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", squares[i]);
    }
    printf("\n");
    return 0;
}