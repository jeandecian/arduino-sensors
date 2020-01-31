#define HCSR04_ECHO_PIN A2
#define HCSR04_TRIG_PIN A3

void setup() {
  pinMode(HCSR04_ECHO_PIN, INPUT);
  pinMode(HCSR04_TRIG_PIN, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(HCSR04_TRIG_PIN, HIGH);
  delay(10);
  digitalWrite(HCSR04_TRIG_PIN, LOW);

  float converter = 0.17;
  int distance = pulseIn(HCSR04_ECHO_PIN, HIGH)*converter;
  Serial.println("Distance: " + String(distance) + " mm");

  delay(1000);
}
