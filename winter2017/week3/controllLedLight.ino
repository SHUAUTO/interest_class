int ledPin=3;
int analog=14;
int value=0;
int light=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(analog);
  analogWrite(ledPin,value);
  delay(20);
}
