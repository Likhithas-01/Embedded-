#include <Ultrasonic.h> 
Ultrasonic ultrasonic(12,13);
int distance;
 void setup() {
Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
distance= ultrasonic.read();
Serial.print("distance in CM:");
Serial.println(distance);
delay(1000);
  // put your main code here, to run repeatedly:

}
