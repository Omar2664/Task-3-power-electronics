void setup() {
Serial.begin(9600);
pinMode(8, INPUT);

}

void loop() {
int analogValue = analogRead(A0);
Serial.print(analogValue); 
int detect = digitalRead(8);
if(detect == LOW){
 Serial.println("----obastacle on the way");
}
else{
 Serial.println("----clear way");
}
delay(300);
}
