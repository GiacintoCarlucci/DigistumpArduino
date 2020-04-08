DigistumpArduino - Italian Keyboard Layout
================

This fork only adds a single file to enable DigiKeyboard usage for Italian keyboard layout.

Want to know the story behind this repo? [Here you are](https://medium.com/@giacintocarlucci/the-cheapest-rubber-ducky-b2e95901d504)

```c
//Include the _It suffixed version instead of the normal one and the rest goes same as the original lib.
#include "DigiKeyboard_It.h"
//Delay time
#define D 100

//No need to setup anything
void setup() {
  }

//This piece of code just prints ASCII characters (0-127)
void loop() {
  int i=0;
  while(i<128){
    // this is generally not necessary but with some older systems it helps to
    // prevent missing the first character after a delay:
    // ***Note the use of DigiKeyboardIt***
    DigiKeyboardIt.sendKeyStroke(0);
    // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
    // if doing keyboard stuff because it keeps talking to the computer to make
    // sure the computer knows the keyboard is alive and connected
    DigiKeyboard.delay(D);
    DigiKeyboardIt.print(i);
    DigiKeyboardIt.print(" ");
    DigiKeyboardIt.print((char)i);
    DigiKeyboardIt.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(D);
    i++;
  }
  //You can also print strings:
  DigiKeyboardIt.println("Hello XYZ !\"$%&/()=? [] {}!");
  for (;;) {}
}
```
