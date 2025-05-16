int ledPin = 9;
int analogPin = A3;
int val = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(analogPin);
  // Serial.println(val);
  delay(1);
  if(val < 600)val = 600;
  if(val > 880)val = 880;
  int ledDimming = map(val,600,880,0,255);
  Serial.println(ledDimming);
  delay(1);
  analogWrite(ledPin,ledDimming);
}
