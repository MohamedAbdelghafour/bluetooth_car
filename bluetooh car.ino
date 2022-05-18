int MR1 = 3;
int MR2 = 5;
int ML1 = 11;
int ML2 = 6;
int PWMR = 9;
int PWML = 10;
#define LED1 2
#define LED2 2
#define LED3 7
#define LED4 7
char val=0;

void setup() {
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(PWMR, OUTPUT);
  pinMode(PWML, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
  delay(5000);
  Serial.print("AT+NAMEMEDO");
  delay(2000);
}
void loop() {

  if (Serial.available() > 0)
{
 val = Serial.read();
 Serial.print(val);
 }
if (val == 'F') // Forward
{
  digitalWrite(MR1,HIGH);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW) ;
}
else if (val == 'B') // Backward
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,HIGH);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,HIGH);

}
else if (val == 'L') // Left
{
  digitalWrite(MR1,HIGH);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,LOW);
}
else if (val == 'R') //Rigt
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
 
}
else if (val == 'S') // Stop
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,LOW);
  }
else if (val == 'I') // Forward Right
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
 
}
else if (val == 'J') // Back Right
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,HIGH);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,LOW);
  
}
else if (val == 'G') // Forward Left 
{
  digitalWrite(MR1,HIGH);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,LOW);
  
}
else if (val == 'H') // Back Left 
{
  digitalWrite(MR1,LOW);
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,HIGH);

}
if (val == '0')
{
  analogWrite(PWMR,0);
  analogWrite(PWML,0) ; 
}
if (val == '1')
{
  analogWrite(PWMR,25);
  analogWrite(PWML,25);
}
if (val == '2')
{
  analogWrite(PWMR,50);
  analogWrite(PWML,50);
}
if (val == '3')
{
  analogWrite(PWMR,100);
  analogWrite(PWML,100);
}
if (val == '4')
{
  analogWrite(PWMR,125);
  analogWrite(PWML,125);
}
if (val == '5')
{
  analogWrite(PWMR,150);
  analogWrite(PWML,150);
}
if (val == '6')
{
  analogWrite(PWMR,175);
  analogWrite(PWML,175);
}
if (val == '7')
{
  analogWrite(PWMR,200);
  analogWrite(PWML,200);
}
if (val == '8')
{
  analogWrite(PWMR,225);
  analogWrite(PWML,225);
}
  if (val =='q'){
  analogWrite(PWMR, 255);
    analogWrite(PWML, 255);
  }
  if (val == 'W'){
    digitalWrite(LED4,HIGH);
    digitalWrite(LED3,HIGH);
  }
  if (val == 'w'){
    digitalWrite(LED4,LOW);
    digitalWrite(LED3,LOW);
  }
  if (val == 'U'){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
  }
  if (val == 'u'){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  }
}
