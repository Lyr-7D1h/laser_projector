const int galvo_y_pin = 25;
const int galvo_x_pin = 26;
const int delay_ms = 1;

void setup() {
  Serial.begin(115200);
  pinMode(galvo_y_pin, OUTPUT);
  pinMode(galvo_x_pin, OUTPUT);
}

void loop() {
 while (true) {
   for (int dutyCycle = 0; dutyCycle <= 10000; dutyCycle++) {
    analogWrite(galvo_x_pin, dutyCycle / 255);
    delay(delay_ms); 
   }
 }
}