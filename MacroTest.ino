#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
delay(10);
Keyboard.releaseAll();
delay(200);
Keyboard.print("notepad");
Keyboard.press(KEY_RETURN);
delay(10);
Keyboard.releaseAll();


Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
delay(10);
Keyboard.releaseAll();
delay(200);
Keyboard.print("C:\\Program Files\\Plex\\Plex\\plex.exe");
Keyboard.press(KEY_RETURN);
delay(10);
Keyboard.releaseAll();

//delay(500);
//Keyboard.print("Hello World!");
//delay(5000);
//Keyboard.press(KEY_LEFT_CTRL);
//Keyboard.press('a');
//delay(10);
//Keyboard.releaseAll();
//Keyboard.press(KEY_DELETE);
//delay(10);
//Keyboard.releaseAll();
//Keyboard.press(KEY_LEFT_ALT);
//Keyboard.press(KEY_F4);
//delay(10);
//Keyboard.releaseAll();
//Keyboard.end();
}
void loop() {}
