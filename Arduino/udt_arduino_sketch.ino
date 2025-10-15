// UDT - Urea Dosing Tester v.0.1

int pinCmd = 3;        // PWM pin che comanda il transistor
int count = 0;

void setup() {
  pinMode(pinCmd, OUTPUT);    // sets the digital pin as output}
}

void loop() {

  // 60 impulsi 1/s
  if (count<100){
    digitalWrite(pinCmd, HIGH);
    delay(15);
    digitalWrite(pinCmd, LOW);
    delay(15);
    count++;

  // 120 impulsi 2/s
  } else if (count<50){
    digitalWrite(pinCmd, HIGH);
    delay(50);
    digitalWrite(pinCmd, LOW);
    delay(50);
    count++;

  // 240 impulsi 4/s
  } else if (count<100){
    digitalWrite(pinCmd, HIGH);
    delay(25);
    digitalWrite(pinCmd, LOW);
    delay(25);
    count++;
  }

}
