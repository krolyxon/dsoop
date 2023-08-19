#include <stdio.h>

void selectionsort(int a[], int n) {
  int small, tmp;
  for (int i = 0; i < n; i++) {
    small = i;
    for (int j = i; j < n; j++) {
      if (a[j] < a[small]) {
        small = j;
      }
    }
    tmp = a[i];
    a[i] = a[small];
    a[small] = tmp;
  }
}

void printarr(int a[], int n, char *prompt) {
  printf("\nArray %s sorting: \n", prompt);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  int a[] = {17, 13, 5, 1, 31, 8, 15};
  int n = sizeof(a) / sizeof(a[0]);
  printarr(a, n, "before");
  selectionsort(a, n);
  printarr(a, n, "after");
  return 0;
}
