int trigger = 8;
int echo_pin=7;
int buzzer_pin=6;
void setup() {
 
  pinMode(trigger,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(buzzer_pin,OUTPUT);

  Serial.begin(9600);
   
  digitalWrite(trigger,LOW);
 //delay(2);

}

void loop() {

 digitalWrite(trigger,HIGH);
 delay(0.01);
 digitalWrite(trigger,LOW);
 float duration = pulseIn(echo_pin,HIGH,10000);
 float dist;
 if(duration != 0)
 {
 float speed_=0.034;
 dist=speed_ * duration/2;
 if(dist >= 20)
 {
  digitalWrite(buzzer_pin,HIGH);
  delay(1000);
 }
  digitalWrite(buzzer_pin,LOW);
 }
 Serial.println(dist);
  
}
