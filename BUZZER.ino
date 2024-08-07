const int buzzerpin=5;
int a=0;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzerpin,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
if(a==0)
{
digitalWrite(buzzerpin,HIGH);
a++;}
else {
digitalWrite(buzzerpin,LOW);
}
}


