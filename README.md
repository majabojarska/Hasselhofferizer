# Hasselhofferizer
Hasselhofferize your colleague's desktop in a flash!

![Hasselhofferizer demo](media/HasselhofferizerDemo.gif)

## About

This Arduino sketch executes a Powershell script that changes the system's wallpaper to the mighty David Hasselhoff in its most badass form possible.

The image URL can be changed however you like.

## Requirements
- Arduino Pro Micro. However, any Arduino-compatible board with native USB support will probably work too.
- Internet connection, because the Powershell script downloads a JPEG image from an online location.
- A colleague, who left their Windows machine unlocked (preferably Windows 10).

## Setup
1. Connect pin D2 to GND with a jumper. As you might have noticed, those are two adjacent pins on the Pro Micro, just so you can use one of these small, 2.54mm jumper caps. This prevents executing the script on your own computer after the upload is finished (refer to line 12 in Arduino sketch). 
2. Open the project, connect your Arduino, select the appropriate board and COM port in your IDE of choice.
3. Flash.
4. Execute and wait for the reaction.