#define trigPin 11
#define echoPin 12
long distance;
long duration;
void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 }
 
 void loop() {
   distance=readUltrasonicSensor();
   if (distance >= 400 || distance <= 0){
     Serial.println("Unknown value"); }
   else {
     Serial.print(distance);
     Serial.println(" cm");
     }
     delay(500);// delay in milliseconds 
}
long readUltrasonicSensor(){
 // Send 10µs pulse 
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 // Read pulse duration 
 duration = pulseIn(echoPin, HIGH);
 Serial.println(duration); 
 return duration/ 58;
}
