#include <stdio.h>

void prompt(char *msg, int *val);
int insert();
int delete();

int main(int argc, char *argv[]) {
  int choice;
  printf("1. Insertion\n2. Deletion\n");
  prompt("Please select a method[1/2]: ", &choice);

  switch (choice) {
  case 1:
    insert();
    break;
  case 2:
    delete ();
    break;
  default:
    break;
  }
  return 0;
}

int delete() {
  int size, pos;
  int arr[10];
  // getting the size of array from the user
  prompt("Please enter the size of array: ", &size);

  // get the array elements
  for (int i = 0; i < size; i++) {
    printf("Enter %dth element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // position
  prompt("Please enter the position: ", &pos);
  pos--;

  // Delete the element
  for (int i = pos; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // print all the elements of array
  for (int i = 0; i < size + 1; i++) {
    printf("\n%d", arr[i]);
  }

  // delete the last element of array
  arr[size - 1] = 0;
  return 0;
}

int insert() {
  int size, pos, val;
  int arr[10];

  // getting the size of array from the user
  prompt("Please enter the size of array: ", &size);

  // get the array elements
  for (int i = 0; i < size; i++) {
    printf("Enter %dth element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // position
  prompt("Please enter the position: ", &pos);
  pos--;

  // value to be inserted
  prompt("Please enter the value to be inserted: ", &val);

  // Shift the array elements by one
  for (int i = size; i >= pos; i--) {
    arr[i + 1] = arr[i];
  }

  // insert the value
  arr[pos] = val;

  // print all the elements of array
  for (int i = 0; i < size + 1; i++) {
    printf("\n%d", arr[i]);
  }
  return 0;
}

void prompt(char *msg, int *val) {
  printf("%s", msg);
  scanf("%d", val);
}
