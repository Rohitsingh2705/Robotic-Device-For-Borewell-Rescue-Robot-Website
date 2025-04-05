#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
 

  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
}

void loop()
{
  // Do nothing here...
 lcd.clear();
 lcd.print("Rescue Operation");
 delay(1500);
lcd.clear();
 



lcd.print("   Starts By");
lcd.setCursor(3,1);

 delay(1500);
lcd.clear();


 lcd.print(" Team Rudraksha");
 delay(2000);
 lcd.clear();
}
