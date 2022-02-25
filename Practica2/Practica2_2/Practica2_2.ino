#include <LiquidCrystal.h> // include the library code:

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize the interface pins
String nombre1 = "Isaac Pimentel";
String nombre2 = "DiegoPerezReyes";

void setup() {
  lcd.begin(16, 2);// set up the LCD's number of columns and rows:
}

void loop() {
  /*lcd.setCursor(1, 0);
  lcd.print("Principios de");// Print a message to the LCD.
  lcd.setCursor(2, 1);
  lcd.print("Mecatronica");
  delay(750);
  lcd.clear();
  delay(250);*/

  

  for(int i=15;i>=0;i--){
    lcd.setCursor(i,0);
    lcd.print(nombre1);
    lcd.setCursor(i,1);
    lcd.print(nombre2);
    delay(500);
    lcd.clear();
  }
}
