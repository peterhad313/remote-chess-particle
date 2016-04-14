#include "ui.h"
int menu;
extern char *menuStrings[] = {
  "1",    //0
  "1.1",   //1
  "1.1.1", //2
  "1.1.2", //3
  "1.2",  //4
  "2",    //5
  "2.1",   //6
  "3"};   //7

enum menuItems {
  a1,
  a11,
  a111,
  a112,
  a12,
  a2,
  a21,
  a3
};
String getMenuString(){
  return menuStrings[menu];
}

void setupButtonInterrupts(){
  pinMode(D7,INPUT_PULLDOWN);
  attachInterrupt(D7, upButton, RISING);

  pinMode(D6,INPUT_PULLDOWN);
  attachInterrupt(D6, backButton, RISING);

  pinMode(D5,INPUT_PULLDOWN);
  attachInterrupt(D5, downButton, RISING);

  pinMode(D4,INPUT_PULLDOWN);
  attachInterrupt(D4, nextButton, RISING);
}

void upButton() {
    switch (menu) {
      case a1:
        menu=a3;
        break;
      case a2:
        menu =a1;
        break;
      case a3:
        menu = a2;
        break;
      case a11:
        menu = a12;
        break;
      case a12:
        menu = a11;
        break;
      case a111:
        menu = a112;
        break;
      case a112:
        menu = a111;
        break;
      case a21:
        menu = a21;
        break;
    }
}

void backButton() {
  switch (menu) {
    case a1:
      menu=a1;
      break;
    case a2:
      menu = a2;
      break;
    case a3:
      menu = a3;
      break;
    case a11:
      menu = a1;
      break;
    case a12:
      menu = a1;
      break;
    case a111:
      menu = a11;
      break;
    case a112:
      menu = a11;
      break;
    case a21:
      menu = a2;
      break;
  }
}

void downButton() {
  switch (menu) {
    case a1:
      menu=a2;
      break;
    case a2:
      menu = a3;
      break;
    case a3:
      menu = a1;
      break;
    case a11:
      menu = a12;
      break;
    case a12:
      menu = a11;
      break;
    case a111:
      menu = a112;
      break;
    case a112:
      menu = a111;
      break;
    case a21:
      menu = a21;
      break;
  }
}

void nextButton() {
  switch (menu) {
    case a1:
      menu=a11;
      break;
    case a2:
      menu = a21;
      break;
    case a3:
      menu = a3;
      break;
    case a11:
      menu = a111;
      break;
    case a12:
      menu = a12;
      break;
    case a111:
      menu = a111;
      break;
    case a112:
      menu = a112;
      break;
    case a21:
      menu = a21;
      break;
  }
}
