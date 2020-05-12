const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 6;
const int IN4 = 7;
const int enA = 10;
const int enB = 11;
const int RS = A2;
const int LS = A1;
const int CS = A0;
int R = 1;
int L = 1;
int C = 0;           

void setup() {
  // put your setup code here, to run once:
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(RS,INPUT);
pinMode(LS,INPUT);
pinMode(CS,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
R=digitalRead(RS);
L=digitalRead(LS);
C=digitalRead(CS);
Serial.println(C);
if (L == 1  && C == 0  && R == 1) {
  forward();
  }else if (L == 0  && C == 1  && R == 1){
  left();  
  }else if (L == 1  && C == 1  && R == 0){
  right();  
  }else if (L == 1  && C == 1  && R == 1){
  halt();
  
  }

}
void forward(){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
analogWrite(enA,150);
analogWrite(enB,150);

  }

void halt(){
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
analogWrite(enA,0);
analogWrite(enB,0);
}

void right(){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
analogWrite(enA,150);
analogWrite(enB,150);
}

void left(){
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
analogWrite(enA,150);
analogWrite(enB,150);
}
