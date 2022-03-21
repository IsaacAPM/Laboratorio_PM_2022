int enablePin = 13;
int pin1A = 12;
int pin2A = 11;
int button0 = 2;
int button1 = 3;
int led0 = 8;
int led1 = 9;

int btn0 = 0;
int btn1 = 0;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);
  pinMode(button0, INPUT);
  pinMode(button1, INPUT);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  btn0 = digitalRead(button0);
  btn1 = digitalRead(button1);
  if (btn0 == HIGH || btn1 == HIGH){
    digitalWrite(led0, btn0);
    digitalWrite(led1, btn1);

    digitalWrite(enablePin, HIGH);
    digitalWrite(pin1A, btn0);
    digitalWrite(pin2A, btn1);
  }else{
    digitalWrite(enablePin, LOW);
    digitalWrite(led0, btn0);
    digitalWrite(led1, btn1);
    }
  delay(100);
}
