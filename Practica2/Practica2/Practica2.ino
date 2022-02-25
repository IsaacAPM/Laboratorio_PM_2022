int analogPin = 0;
int D13 = 13;
float val = 0;
float resp = 0;

void setup() {
  pinMode(D13,OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  Serial.print("Conversioón analógico-digital: ");
  resp = val*(5.0/1023.0);
  
  Serial.println(resp);

  /*if(resp>3){
    digitalWrite(D13,HIGH);
  }else{
    digitalWrite(D13,LOW);
  }*/

  analogWrite(D13,resp);
  
}
