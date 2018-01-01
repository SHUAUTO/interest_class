int fadeLed=3;
int light=0;
int lightInterval=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(fadeLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  for(int i=0;i<255;i++){
//    analogWrite(fadeLed,i);
////    delay(20);
//  }
//  for(int i=255;i>0;i--){
//    analogWrite(fadeLed,i);
////    delay(20);
//  }
  analogWrite(fadeLed,light);
  light+=lightInterval;
  if(light <=0 || light>=255){
    lightInterval 
  }
}
