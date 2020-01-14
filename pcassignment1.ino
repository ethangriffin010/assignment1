//written by Ethan Griffin Jan 14 2020
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //using pin 13
  pinMode(12, OUTPUT);//pin 12
  pinMode(8, OUTPUT);//pin 8
  

}

void loop() {
  //blink
  digitalWrite(13, HIGH);//turn on led 13
  delay(1000);
  digitalWrite(13, LOW);//turn led off
  delay(1000);
  digitalWrite(12, HIGH);//turn on led 12
  delay(10);
  digitalWrite(12, LOW);//turn led off
  delay(10);
  //fade
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {//fading in increments of 10 for led 9
    analogWrite(9, fadeValue);
    delay(100);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 10) {
    analogWrite(9, fadeValue);
    delay(30);
  }
}
