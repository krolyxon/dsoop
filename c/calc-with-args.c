#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int *ans, int x, int y);
void sub(int *ans, int x, int y);
void mul(int *ans, int x, int y);
void divide(int *ans, int x, int y);

int main(int argc, char *argv[]) {
  int ans;
  float x = atof(argv[2]);
  float y = atof(argv[3]);
  int addition = strcmp(argv[1], "add");
  int substraction = strcmp(argv[1], "sub");
  int multiplication = strcmp(argv[1], "mul");
  int division = strcmp(argv[1], "div");

  if (!addition) {
    add(&ans, x, y);
    printf("Sum is: %d\n", ans);
  } else if (!substraction) {
    sub(&ans, x, y);
    printf("Substraction is: %d\n", ans);
  } else if (!multiplication) {
    mul(&ans, x, y);
    printf("Multiplication is: %d\n", ans);
  } else if (!division) {
    divide(&ans, x, y);
    printf("Division is: %d", ans);
  } else {
    printf("The provided operation is not currently supported\n");
  }
}

void add(int *ans, int x, int y) { *ans = x + y; }

void sub(int *ans, int x, int y) { *ans = x - y; }

void mul(int *ans, int x, int y) { *ans = x * y; }

void divide(int *ans, int x, int y) { *ans = x / y; }
