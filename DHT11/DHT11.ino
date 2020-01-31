#include <dht.h>

#define DHT11_PIN 7

dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  
  int humidity = DHT.humidity;
  int temperature = DHT.temperature;
  
  Serial.println("Humidity: " + String(humidity) + "%");
  Serial.println("Temperature: " + String(temperature) + "°C");
  
  delay(2000);
}
