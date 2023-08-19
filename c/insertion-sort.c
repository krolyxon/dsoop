#include <stdio.h>

void printarr(int a[], int n, char *prompt) {
  printf("\nArray %s sorting: ", prompt);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

void swap(int a[], int i, int j) {
  int tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
}

void insertionsort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int j = i;
    while (j > 0 && a[j - 1] > a[j]) {
      swap(a, j, j - 1);
      j--;
    }
  }
}

int main() {
  int a[] = {
      6, 420, 25, 8, 2, 1, 69,
  };
  int n = sizeof a / sizeof a[0];
  printarr(a, n, "before");
  insertionsort(a, n);
  printarr(a, n, "after");
}
