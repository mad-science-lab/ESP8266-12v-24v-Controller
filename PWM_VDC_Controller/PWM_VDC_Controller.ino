/*
*
*
*/

int i;                                                // var for counting the value loop

#define BASE 15  PWM

void setup() {
  delay(2000);
  Serial.begin(115200);
  delay(2000);
    Serial.println("Hello World!");  
  
  pinMode(BASE, OUTPUT);
  analogWriteRange(100);                               // range 1 - 100 for the fan
  analogWriteFreq(500); 
}

void loop() {
  for(i = 0; i <= 100; i = i + 25) {
    Serial.print("i = "); Serial.println(i);          // print the pwm value    
  analogWrite(BASE, i);
  delay(1000);
  }
}
