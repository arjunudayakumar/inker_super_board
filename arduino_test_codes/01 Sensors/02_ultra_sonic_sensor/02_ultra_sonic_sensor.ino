const int trigPin = 12;
const int echoPin = 14;
long duration;
int distanceCm;
void setup() {
Serial.begin(9600); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
Serial.print("Distance: "); // Prints string "Distance" on the LCD
Serial.print(distanceCm); // Prints the distance value from the sensor
Serial.println(" cm"); // Prints string "Distance" on the LCD
delay(100);
}
