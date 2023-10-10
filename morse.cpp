#include "mbed.h"
#include <string>



// Blinking rate in milliseconds
#define BLINKING_SPACE 1000ms
#define BLINKING_DOT 500ms
#define BLINKING_LINE 1000ms
#define BLINKING_LETTER_SPACE 500ms

void dot(DigitalOut led) {
  led = 1;
  ThisThread::sleep_for(BLINKING_DOT);
  led = 0;
}

void line(DigitalOut led) {
  led = 1;
  ThisThread::sleep_for(BLINKING_LINE);
  led = 0;
}

void smallSpace(DigitalOut led) {
  ThisThread::sleep_for(BLINKING_LETTER_SPACE);
}

void space(DigitalOut led) { ThisThread::sleep_for(BLINKING_SPACE); }

void A(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void B(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void C(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void D(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void E(DigitalOut led) {
  dot(led);
  space(led);
}

void F(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
}

void G(DigitalOut led) {
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void H(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void I(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void J(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  space(led);
}

void K(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void L(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void M(DigitalOut led) {
  line(led);
  smallSpace(led);
  line(led);
  space(led);
}

void N(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void O(DigitalOut led) {
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  space(led);
}

void P(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void Q(DigitalOut led) {
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void R(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void S(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void T(DigitalOut led) {
  line(led);
  space(led);
}

void U(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void V(DigitalOut led) {
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void W(DigitalOut led) {
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  space(led);
}

void X(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  space(led);
}

void Y(DigitalOut led) {
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  line(led);
  space(led);
}

void Z(DigitalOut led) {
  line(led);
  smallSpace(led);
  line(led);
  smallSpace(led);
  dot(led);
  smallSpace(led);
  dot(led);
  space(led);
}

void blinkText(char character, DigitalOut led) {
  character = (char)tolower(character);

  switch (character) {
  case 'a':
    A(led);
    break;
  case 'b':
    B(led);
    break;
  case 'c':
    C(led);
    break;
  case 'd':
    D(led);
    break;
  case 'e':
    E(led);
    break;
  case 'f':
    F(led);
    break;
  case 'g':
    G(led);
    break;
  case 'h':
    H(led);
    break;
  case 'i':
    I(led);
    break;
  case 'j':
    J(led);
    break;
  case 'k':
    K(led);
    break;
  case 'l':
    L(led);
    break;
  case 'm':
    M(led);
    break;
  case 'n':
    N(led);
    break;
  case 'o':
    O(led);
    break;
  case 'p':
    P(led);
    break;
  case 'q':
    Q(led);
    break;
  case 'r':
    R(led);
    break;
  case 's':
    S(led);
    break;
  case 't':
    T(led);
    break;
  case 'u':
    U(led);
    break;
  case 'v':
    V(led);
    break;
  case 'w':
    W(led);
    break;
  case 'x':
    X(led);
    break;
  case 'y':
    Y(led);
    break;
  case 'z':
    Z(led);
    break;
  }
}