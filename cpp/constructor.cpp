#include <iostream>

class Counter {
public:
  static int counter;
  Counter() {
    counter += 1;
    std::cout << counter << " objects have been created of class Counter" << std::endl;
  }
};

int Counter::counter = 0;

int main() {
  Counter a;
  Counter b;
  Counter c;
  Counter d;
  Counter e;
}
