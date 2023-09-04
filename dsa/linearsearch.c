#include <stdio.h>

int linearsearch(int arr[], int val, int len) {
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] == val) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[20], len, val;
  // Get lenght of array
  printf("Please enter the lenght of array: ");
  scanf("%d", &len);

  // Get elements of the array
  for (int i = 0; i < len; i++) {
    printf("Enter %dth element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // print out the elements of array
  printf("Elements of the array: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  // Get the value to be searched for
  printf("\nEnter the value to be searched: ");
  scanf("%d", &val);

  int result = linearsearch(arr, val, len);
  if (result == -1) {
    printf("Element not found");
  } else {
    printf("Element found at position: %d", result + 1);
  }

  return 0;
}
