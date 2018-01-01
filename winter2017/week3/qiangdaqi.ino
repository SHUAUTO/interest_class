int redLed=2;
int greenLed=3;
int yellowLed=4;
int redButton=5;
int greenButton=6;
int yellowButton=7;

void init(){
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(redButton,INPUT);
  pinMode(greenButton,INPUT);
  pinMode(yellowButton,INPUT);
}
void clearStatus(){
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,LOW);
}
void setRed(){
  while(digitalRead(redButton)==HIGH){
    digitalWrite(redLed,HIGH);
    digitalWrite(greenLed,LOW);
    digitalWrite(yellowLed,LOW);
  }
  clearStatus();
}
void setGreen(){
  while(digitalRead(greenButton)==HIGH){
    digitalWrite(redLed,LOW);
    digitalWrite(greenLed,HIGH);
    digitalWrite(yellowLed,LOW);
  }
  clearStatus();
}
void setYellow(){
  while(digitalRead(yellowButton)==HIGH){
    digitalWrite(redLed,LOW);
    digitalWrite(greenLed,LOW);
    digitalWrite(yellowLed,HIGH);
  }
  clearStatus();
}
void setup() {
  // put your setup code here, to run once:
  init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(redButton)==HIGH) setRed();
  else if(digitalRead(greenButton)==HIGH) setGreen();
  else if(digitalRead(yellowButton)==HIGH) setYellow();
  else ;
}
