const int galvo_x_pin = 25;
const int galvo_y_pin = 26;
const int delay_ms = 15;

void setup() {
  Serial.begin(115200);
  pinMode(galvo_x_pin, OUTPUT);
  pinMode(galvo_y_pin, OUTPUT);
}

void loop() {
 for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
  analogWrite(galvo_x_pin, dutyCycle);
  delay(delay_ms); 
 }

 for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
  analogWrite(galvo_x_pin, dutyCycle);
  delay(delay_ms); 
 }

 for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
  analogWrite(galvo_y_pin, dutyCycle);
  delay(delay_ms); 
 }

 for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
  analogWrite(galvo_y_pin, dutyCycle);
  delay(delay_ms); 
 }
}