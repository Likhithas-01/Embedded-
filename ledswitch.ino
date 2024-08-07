int ledpin=8;
int buttonpin=5;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:

pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}
void loop() {

 buttonstate=digitalRead(buttonpin);
if(buttonstate==HIGH)
{
  digitalWrite(ledpin,HIGH); 
}
else
{
  digitalWrite(ledpin, LOW);
}
 } // put your main code here, to run repeatedly:
