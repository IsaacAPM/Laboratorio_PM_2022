int enablePin = 13;
int pin1A = 12;
int pin2A = 11;

int potenciometro = 0;
int ptc = 0;
int pwm = 0;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);
  pinMode(A0, INPUT);

  Serial.begin(9600);
}

void loop() {
  ptc = analogRead(A0);
  Serial.print("ptc: " + (String)ptc + '\t');
  Serial.print("pwm: " + (String)pwm + '\n');
  if (ptc > 506 && ptc <517){
      digitalWrite(enablePin, LOW);
      digitalWrite(pin1A, LOW);
      digitalWrite(pin2A, LOW);
  }else{
    if (ptc < 506){
      pwm = map(ptc,506,0,0,255);
      digitalWrite(pin1A, HIGH);
    }else{
      pwm = map(ptc,517,1023,0,255);
      digitalWrite(pin2A, HIGH);
    }
    analogWrite(enablePin, pwm);
  }
}
