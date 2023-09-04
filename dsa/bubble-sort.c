#include <stdio.h>

void swap(int arr[], int i);

void bubblesort(int arr[], int size);

int main(int argc, char *argv[]) {

  int array[] = {1, 6, 2, 149, 5, 2, 0};
  int size = sizeof array / sizeof array[0];

  bubblesort(array, size);
  for (int i = 0; i < size; i++) {

    printf("\n%d", array[i]);
  }
  return 1;
}

void swap(int arr[], int i) {
  int tmp = arr[i];
  arr[i] = arr[i + 1];
  arr[i + 1] = tmp;
}

void bubblesort(int arr[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (arr[i] > arr[i + 1]) {
        swap(arr, i);
      }
    }
  }
}
