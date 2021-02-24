int sensor_pin = 8; // Initialized the pin for motion sensor
int relay_pin = 9;  // Initialized the pin for relay module
int output;   // Variable to store the output state of motion sensor
void setup(){
  Serial.begin(9600);
  pinMode(sensor_pin, INPUT);   // Declared motion sensor pin as Input
  pinMode(relay_pin, OUTPUT);   // Declared relay module pin as Output pin
  // Make the relay module initial state as low, Relay works opposite
  digitalWrite(relay_pin, HIGH);
}
void loop(){
  // Read the output state of motion sensor
  output = digitalRead(sensor_pin);
  
  // If output is High
  if(output == 1){
    digitalWrite(relay_pin, LOW);
  }
  
  // If output is LOW
  else if(output == 0){
    digitalWrite(relay_pin, HIGH);
  }
  Serial.println(output);
  delay(100);
}
