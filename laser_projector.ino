#define GALVO_Y_PIN 25
#define GALVO_X_PIN 26

void setup() {
  Serial.begin(115200);
  // pinMode(GALVO_Y_PIN, OUTPUT);
  // pinMode(GALVO_X_PIN, OUTPUT);
}

void loop() {
 for (int i = 0; i <= 255; i++) { 
   dacWrite(GALVO_X_PIN, i);
   delay(500);
 }

 // while (true) {
 //   for (int dutyCycle = 0; dutyCycle <= 10000; dutyCycle++) {
 //    analogWrite(galvo_x_pin, dutyCycle / 255);
 //    delay(delay_ms); 
 //   }
 // }
}