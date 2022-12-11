#include <stdio.h>
#include <math.h>

void heapify(int arr[], int arrLength, int i) {
  int m, temp;
  m = i;
  int l = 2*i + 1;
  int r = 2*i + 2;

  if (l < arrLength && arr[l] > arr[m]) {
    m = l;
  }

  if (r < arrLength && arr[r] > arr[m]) {
    m = r;
  }

  if (m != i) {
    temp = arr[i];
    arr[i] = arr[m];
    arr[m] = temp;
    heapify(arr, arrLength, m);
  }
}

void heapsort(int arr[], int arrLength) {
  for (int i = arrLength / 2 - 1; i >= 0; i--) {
    heapify(arr, arrLength, i);
  }

  for (int i = arrLength-1; i >= 0; i--) {
    int temp = arr[i];
    arr[i] = arr[0];
    arr[0] = temp;
    heapify(arr, i, 0);
  }
}

void printArray(int arr[], int arrLength) {
  printf("[");

  for (int i = 0; i < arrLength; i++) {
    printf("%d", arr[i]);

    if (i != arrLength-1) {
      printf(", ");
    }
  }

  printf("]\n");
}

int main() {
  int arr[] = {6, 8, 2, 10, 1, 5, 7, 4, 9, 3};
  int arrLength = sizeof(arr) / sizeof(arr[0]);

  printf("Before: ");
  printArray(arr, arrLength);

  heapsort(arr, arrLength);

  printf("After: ");
  printArray(arr, arrLength);
}