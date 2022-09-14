//right motor
int mR1 = 9;
int mR2 = 8;

//left motor
int mL1 = 10;
int mL2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(mR1,OUTPUT);
  pinMode(mR2,OUTPUT);
  pinMode(mL1,OUTPUT);
  pinMode(mL2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(mR1,HIGH);
  digitalWrite(mR2,LOW);
  digitalWrite(mL1,LOW);
  digitalWrite(mL2,HIGH);
}
