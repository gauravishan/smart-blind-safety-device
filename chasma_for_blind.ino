int trigur=11;
int echour=12;
int trigul=10;
int echoul=9;
#define vcc 13 
long durationr;
long distancer;
long durationl;
long distancel;
int buzzer=8;
void setup() {
  // put your setup code here, to run once:
pinMode(vcc,OUTPUT);
digitalWrite(vcc,HIGH);
pinMode(echour,INPUT);//echo
pinMode(trigur,OUTPUT);//trig
pinMode(echoul,INPUT);//echo
pinMode(trigul,OUTPUT);//trig
}
void loop() {
digitalWrite(trigur,HIGH);
delay(10); 
digitalWrite(trigur,LOW);
durationr=pulseIn(echour,HIGH);
distancer=(0.032*durationr)/2;
digitalWrite(trigul,HIGH);
delay(10); 
digitalWrite(trigul,LOW);
durationl=pulseIn(echoul,HIGH);
distancel=(0.032*durationl)/2;
  // put your main code here, to run repeatedly:

if(distancer<150 && distancel<150)
{
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(100);
  
 
  
}

else if(distancer<150 && distancel>150)
{
  digitalWrite(buzzer,HIGH);
  delay(200);
 
}
else if(distancer>150 && distancel<150)
{
  digitalWrite(buzzer,HIGH);
  delay(200);
  
}
else if(distancer>150 && distancel>150)
{  
  digitalWrite(buzzer,LOW);
}
}
