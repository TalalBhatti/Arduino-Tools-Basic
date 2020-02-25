long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
pinMode (9,OUTPUT);
pinMode (10,INPUT);
pinMode (3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (9,HIGH);
delayMicroseconds (10);
digitalWrite (9,LOW);
duration = pulseIn (10,HIGH);
distance = duration*0.034/2;
Serial.print(distance);
Serial.println ("cm");
if (distance <= 30) 
analogWrite (3,255);
else 
analogWrite (3,0);

}
