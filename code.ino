int p1, p2, p3; //initialising pot variables
int x1, x2, x3;
int l1, l2, l3;
int u1, u2, u3;
int count = 0;

void setup() {
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

}

void loop() {
p1 = analogRead(A0);
p2 = analogRead(A1);
p3 = analogRead(A2);
count = count+1;
if (count == 1)
{
  int x1 = p1;
  int x2 = p2;
  int x3 = p3;
}
int u1 = x1+5;
int l1 = x1-5;
int u2 = x2+5;
int l2 = x2-5;
int u3 = x3+5;
int l3 = x3-5;
//base motor motion
if (p1>u1)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
delay(500);
x1=p1;
  }
if(p1<l1)
{
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(500);
x1=p1;
  }
  if(p1<u1 || p1>l1)
  {
digitalWrite(8, HIGH);
digitalWrite(9,LOW);
delay(500);
x1=p1;    
    }
//hand motor motion
if (p2>u2)
{
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(500);
x2=p2;
  }
if(p2<l2)
{
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(500);
x2=p2;
  }
  if(p2<u2 || p2>l2)
  {
digitalWrite(10, HIGH);
digitalWrite(11,LOW);
delay(500);
x2=p2;    
    }
//claw motor motion
if (p3>u3)
{
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
delay(500);
x3=p3;
  }
if(p3<l3)
{
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(500);
x3=p3;
  }
  if(p3<u3 || p3>l3)
  {
digitalWrite(12, HIGH);
digitalWrite(13,LOW);
delay(500);
x3=p3;    
    }
     
}
