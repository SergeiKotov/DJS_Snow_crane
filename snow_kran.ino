int motorP = 4;
int motorM = 5;
int motorPWM = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorP, OUTPUT);
  pinMode(motorM, OUTPUT);
  pinMode(motorPWM, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Крутим в одну сторону
  analogWrite(motorPWM, 120);
  digitalWrite(motorP, HIGH);
  digitalWrite(motorM, LOW);
  delay(15000);

  // Пауза
  digitalWrite(motorP, LOW);
  digitalWrite(motorM, LOW);
  delay(3000);
  
  // Крутим в другую сторону
  analogWrite(motorPWM, 120);
  digitalWrite(motorP, LOW);
  digitalWrite(motorM, HIGH);
  delay(15000);
  
  // Пауза
  digitalWrite(motorP, LOW);
  digitalWrite(motorM, LOW);
  delay(3000);

}
