int vin=A0;
int led=10;
int trigger = 8;
int echo_pin=7;
int buzzer_pin=6;
void setup() {
  // put your setup code here, to run once:

   pinMode(vin,INPUT);
   pinMode(led,OUTPUT);
   pinMode(trigger,OUTPUT);
   pinMode(echo_pin,INPUT);
   pinMode(buzzer_pin,OUTPUT);
   
   digitalWrite(trigger,LOW);
    Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
float val = analogRead(vin);
float mv=(500*val)/1024;
// Serial.print(mv);
float tmp=mv;
Serial.println(mv);
Serial.println();
if(tmp>45)
{
  digitalWrite(led,HIGH);
}
digitalWrite(trigger,HIGH);
delay(0.01);
digitalWrite(trigger,LOW);
 float duration = pulseIn(echo_pin,HIGH,10000);
 float dist;
 if(duration != 0)
 {
 float speed_=0.034;
 dist=speed_ * duration/2;
 if(dist <= 50 && dist >= 10)
 {
  digitalWrite(buzzer_pin,HIGH);
  
 }

 }
 Serial.println(dist);

  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(buzzer_pin,LOW);
}
