const int redPin = 11;
const int orangePin = 10;
const int greenPin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(orangePin, OUTPUT);  
  pinMode(greenPin, OUTPUT);  
}

void loop() {
  setLEDs(1, 0, 0);
  delay(3000);
  setLEDs(1, 1, 0);
  delay(500);
  setLEDs(0, 0, 1);
  delay(5000);
  setLEDs(0, 1, 0);
  delay(500);
}
  
void setLEDs(int red, int orange, int green) {
 digitalWrite(redPin, red);
 digitalWrite(orangePin, orange);
 digitalWrite(greenPin, green);
}

