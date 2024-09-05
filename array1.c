#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int source[n], dest[n];
    printf("Enter elementd of the source array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&source[i]);
    }
    for (int i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }
    printf("Elements of the destination array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",dest[i]);
    }
    return 0;
}