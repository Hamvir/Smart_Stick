int vout=9;
int vin=A0;
int led=10;
void setup() {
  // put your setup code here, to run once:
   pinMode(vout,OUTPUT);
   pinMode(vin,INPUT);
   pinMode(led,OUTPUT);
   digitalWrite(vout,HIGH);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
float val = analogRead(vin);
float mv=(500*val)/1024;
// Serial.print(mv);

float tmp=mv;
 Serial.println(mv);

if(tmp>33)
{
  digitalWrite(led,HIGH);

  delay(1000);
  digitalWrite(led,LOW);
}
}
