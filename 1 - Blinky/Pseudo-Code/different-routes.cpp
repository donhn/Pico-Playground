switch (expression) {
  case route1:
    // blink one time
    break;
  case route2:
    // blink two times
    break;
  default:
    // blink three times
}

void blink(const int led_pin, const int num_blinks) {
  for (int i = 0; i < num_blinks; i++) {
    gpio_put(led_pin, 1);
    sleep_ms(250);
    gpio_put(led_pin, 0);
    sleep_ms(250);
  }
}

void blink(const int led_pin, const int num_blinks, const double blink_rate) {
  for (int i = 0; i < num_blinks; i++) {
    gpio_put(led_pin, 1);
    sleep_ms(blink_rate / 2);
    gpio_put(led_pin, 0);
    sleep_ms(blink_rate / 2);
  }
}

switch (expression) {
  case route1:
    // blink one time
    blink(LED1, 1, 500);
    blink(LED2, 1, 250);
    break;
  case route2:
    // blink two times
    blink(LED1, 2, 500);
    blink(LED2, 2, 250);
    break;
  default:
    // blink three times
    blink(LED1, 3, 500);
    blink(LED2, 3, 250);
}