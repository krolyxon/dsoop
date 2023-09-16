#include <stdio.h>

#define MAX 128

int queue[MAX];
int front, rear = -1;

int enqueue(int val);
int dequeue();
int print_queque();
void help();

int main(int argc, char *argv[]) {
  int choice = -1;
  while (choice != 4) {
    help();
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      printf("Enter value to be Enqueued: ");
      scanf("%d", &choice);
      enqueue(choice);
      print_queque();
      break;
    }
    case 2:
      dequeue();
      print_queque();
      break;
    case 3:
      print_queque();
      break;
    default:
      printf("Invalid choice.");
    }
  }
}

void help() {
  printf("1. Enqueue\n");
  printf("2. Dequeue\n");
  printf("3. Print the Queue\n");
  printf("4. Exit\n");
  printf("Enter operation: ");
}

int enqueue(int val) {
  if (rear == MAX - 1) {
    printf("Queue overflow");
  } else if (front == -1 && rear == -1) {
    front = 0;
    rear = 0;
    queue[rear] = val;
  } else {
    rear++;
    queue[rear] = val;
  }
  return 1;
}

int dequeue() {
  if (front == -1 || front > rear) {
    printf("Queue underflow!");
    return 0;
  } else {
    int item = queue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front++;
    }
  }
  return 1;
}

int print_queque() {
  if (front == -1 && rear == -1) {
    printf("Queue Underflow!!");
  } else {
    for (int i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
  printf("\n");
  return 1;
}
