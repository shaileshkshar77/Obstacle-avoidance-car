int trig=9;
int echo=10;
int distance;
int dur;
int r=4;
int l=6;
int l1=5;
int rf=2;
int r1=3;
void setup()
{
 pinMode(l,OUTPUT);
 pinMode(r,OUTPUT);
 pinMode(l1,OUTPUT);
 pinMode(r1,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
 Serial.begin(9600);
}

void front()
{
  
  digitalWrite(l,HIGH);
  digitalWrite(l1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r,HIGH);
}
void stop()
{
  
  digitalWrite(l1,LOW);
  digitalWrite(l,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r,LOW);
}
void back()
{
  digitalWrite(l,LOW);
  digitalWrite(r,LOW);
  digitalWrite(l1,HIGH);
  digitalWrite(r1,HIGH);
}

void left()
{
  digitalWrite(r1,LOW);
  digitalWrite(l,LOW);
  digitalWrite(r,HIGH);
  digitalWrite(l1,HIGH);
}
void right()
{
  digitalWrite(l1,LOW);
  digitalWrite(l,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r,LOW);
}
void loop()
{
  front();
 digitalWrite(trig,LOW);
  delay(5);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  dur = pulseIn(echo,HIGH);
  distance = dur*0.34/2;
  Serial.print(distance);
  Serial.print("\t");
  
if(distance<175)

 {
  stop();
  delay(1000);
  back();
  delay(1000);
  stop();
  delay(1000);
  right();
  delay(1000);
  stop();
  delay(1000);
  
 }
 
}
