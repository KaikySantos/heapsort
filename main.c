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
  int arr[] = {5, 24, 62, 1, 53, 23, 5, 34, 23, 10};
  int arrLength = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, arrLength);
}