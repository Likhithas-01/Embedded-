int ledpin=8;
int irpin=5;
int irsensorstate=0;
void setup() {
  // put your setup code here, to run once:

pinMode(ledpin,OUTPUT);
pinMode(irpin,INPUT);
Serial.begin(9600);
}

void loop() {

 irsensorstate=digitalRead(irpin);
 Serial.println(irsensorstate);
 delay(1000);
if(irsensorstate==HIGH)
{
  digitalWrite(ledpin,HIGH); 
}
else
{
  digitalWrite(ledpin, LOW);
}
delay(1000);
 } // put your main code here, to run repeatedly:
