

powershell -Command "Invoke-WebRequest %url% -OutFile hass.jpg"
Add-Type -AssemblyName system.drawing
$imageFormat = “System.Drawing.Imaging.ImageFormat” -as [type]
$image = [drawing.image]::FromFile("hass.jpg")
$image.Save("hass.bmp", $imageFormat::bmp)

REM Download jpg from URL

REM Set wallpaper
REM reg add "HKEY_CURRENT_USER\Control Panel\Desktop" /v Wallpaper /t REG_SZ /d  %cd%/hass.png /f
REM date registry for changes to take effect
REM RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters

