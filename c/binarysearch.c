#include <stdio.h>

int binarysearch(int arr[], int start, int end, int value) {
  int mid = (start + end) / 2;
  if (start < end) {
    if (arr[mid] == value) {
      return mid + 1;
    } else if (value < arr[mid]) {
      return binarysearch(arr, start, mid - 1, value);
    } else {
      return binarysearch(arr, mid + 1, end, value);
    }
  }
  return -1;
}

int main(int argc, char *argv[]) {
  int arr[] = {10, 20, 40, 50, 60, 259, 600};
  int end = sizeof(arr) / sizeof(arr[0]);
  int value = 259;
  int result = binarysearch(arr, 0, end - 1, value);
  if (result == -1) {
    printf("Error: element not found in the list");
  } else {
    printf("Element found at position %d", result);
  }
  return 0;
}
