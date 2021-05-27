// blinky_main.cpp

// Turn the Pico LED on and off every 0.5 seconds.
#include "pico/stdlib.h"

constexpr int kLED_PIN = 25;

int main() {
  gpio_init(kLED_PIN);
  gpio_set_dir(kLED_PIN, GPIO_OUT);
  while (true) {
    gpio_put(kLED_PIN, 1);
    sleep_ms(250);
    gpio_put(kLED_PIN, 0);
    sleep_ms(250);
  }
}