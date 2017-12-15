/*
 * 简单流水灯，切记将LED灯串联电阻，灯烧了没事儿，板子烧了是大事。
 * Bob Liao
 */
//定义引脚,线路连接图1
int Led1=11;
int Led2=12;
int Led3=13;
void setup() {
  //初始化所用arduino引脚
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
}

void loop() {
  //间隔一秒对各个引脚写高低电平
  digitalWrite(Led1,HIGH);
  delay(1000);
  digitalWrite(Led1,LOW);
  delay(1000);
   digitalWrite(Led2,HIGH);
  delay(1000);
  digitalWrite(Led2,LOW);
  delay(1000); 
  digitalWrite(Led3,HIGH);
  delay(1000);
  digitalWrite(Led3,LOW);
  delay(1000);
}
