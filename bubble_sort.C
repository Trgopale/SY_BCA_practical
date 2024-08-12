#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubbleSort(int* A, int n){
    int temp;
    for (int i = 0; i< n-1; i++)//for number if pass
    {
        for (int j = 0; j <n-1-i ; j++)//for comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main(){
    int A[] = {5,1,3,9,7,2,6,8,4};
    int n = 9;
    printArray(A, n);// printer the array befor sorting
    bubbleSort(A, n);// Function to sort the array
    printArray(A, n);// Printing the array befor sorting
    return 0;
}