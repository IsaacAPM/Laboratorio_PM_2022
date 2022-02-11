//4.1
void setup() {
{
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an output.
}
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
}

//4.1.3
int ledPin = 13;  // LED connected to digital pin 13
int inPin = 12;    // pushbutton connected to digital pin 7
int input = 0;

void setup() {
{
  pinMode(ledPin, OUTPUT); // initialize digital pin D13 as an output.
  pinMode(inPin, INPUT); // initialize digital pin D12 as an input.
}
void loop()
{
  input = digitalRead(inPin); // read the input pin
  digitalWrite(ledPin, input);  // sets the LED to the button's value
}

//4.1.6
int ledPin = 13;  // LED connected to digital pin 13
int inPin = 12;    // pushbutton connected to digital pin 7
int input = 0;

void setup() {
{
  pinMode(ledPin, OUTPUT); // initialize digital pin D13 as an output.
  pinMode(inPin, INPUT); // initialize digital pin D12 as an input.
}
void loop()
{
  input = digitalRead(inPin); // read the input pin
  if(input == LOW){
    digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000); // wait for a second
    digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
  }else{
    digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(2000); // wait for a second
    digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
    delay(2000); // wait for a second
  }
}

//4.3
int sm1_ledVerde = 5;
int sm1_ledAmarillo = 6;
int sm1_ledRojo = 7;
int sm2_ledVerde = 8;
int sm2_ledAmarillo = 9;
int sm2_ledRojo = 10;

void setup() {
{
  pinMode(sm1_ledVerde, OUTPUT);
  pinMode(sm1_ledAmarillo, OUTPUT);
  pinMode(sm1_ledRojo, OUTPUT);
  pinMode(sm2_ledVerde, OUTPUT);
  pinMode(sm2_ledAmarillo, OUTPUT);
  pinMode(sm2_ledRojo, OUTPUT);
}
void loop()
{
  digitalWrite(sm1_ledRojo, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(sm2_ledVerde, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(5000); // wait for 5 seconds
  digitalWrite(sm1_ledRojo, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(sm2_ledAmarillo, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(sm1_ledVerde, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(sm2_ledRojo, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(5000); // wait for 5 seconds
  digitalWrite(sm1_ledAmarillo, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(sm2_ledRojo, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
}
