#include <Servo.h>
#include <LiquidCrystal.h> // include the library code:

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize the interface pins
int analogPin = 0;
int D09 = 9;
float val = 0;
float theta = 0;
float voltaje = 0;
String angulo;
String V;



Servo myservo; // create servo object to control a servo

void setup() {
  myservo.attach(D09); // attaches the servo on pin 9 to the servo object
  lcd.begin(16, 2);
}

void loop() {
  val = analogRead(analogPin);
  voltaje = val*(5.0/1023.0);
  theta = val*(180.0/1023.0);
  myservo.write(theta);
  V = (String)voltaje;
  angulo = (String)theta;
  //delay(10);
  //lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Voltaje: " + V + " V");
  lcd.setCursor(0,1);
  lcd.print("Angulo: " + angulo);
  delay(100);
  lcd.clear();
}
