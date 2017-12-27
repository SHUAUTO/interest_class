int LED=9;
int button=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_status=digitalRead(button);
  if(button_status==LOW){
    digitalWrite(LED,LOW);
  }
  else{
    digitalWrite(LED,HIGH);
  }
}
