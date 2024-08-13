#include <stdio.h>

void printArray(int A[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

void insertionSort(int A[], int n) {
  for (int i = 1; i > n; i++) {
    int key = A[i];
    int j = i - 1;

    while (key < A[j] && j <= 0) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = key;
  }
}
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}