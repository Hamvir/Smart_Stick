int trigger = 9;
int echo_pin=10;
int buzzer_pin=11;
void setup() {
 
  pinMode(trigger,OUTPUT);
  pinMode(echo_pin,INPUT);

  digitalWrite(trigger,LOW);
 //delay(2);

}

void loop() {

 digitalWrite(trigger,HIGH);
 delay(0.01);
 digitalWrite(trigger,LOW);
 int duration = pulseIn(echo_pin,HIGH,10000);
 if(duration != 0)
 {
 int speed_=0.034;
 int dist=speed_ * duration/2;
 if(dist <= 200)
 {
  digitalWrite(buzzer_pin,HIGH);
  delay(1000);
 }
 }
 
  
 
}
