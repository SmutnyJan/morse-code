/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "morse.h"
#include <string>


int main() {
  // Initialise the digital pin LED1 as an output
  DigitalOut led(LED1);
  string text = "sos";
  while (true) {
    for (int i = 0; i < text.size(); i++) {
      blinkText(text[i], led);
    }
  }
}
