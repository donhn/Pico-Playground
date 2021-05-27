// Send "Hello world!" to the console every second, forever!
#include <iostream>

#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  while (true) {
    std::cout << "Hello world!\n";
    sleep_ms(1000);
  }

  return 0;
}