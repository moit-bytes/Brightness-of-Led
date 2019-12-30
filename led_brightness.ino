int p1 = 11;
int p2 = 6;
int p3 = 3;
void setup() 
{
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);

}

void loop() 
{
  for(int i = 0; i<=255; i+=2)
  {
    analogWrite(p1, i);
    analogWrite(p2, i);
    analogWrite(p3, i);
    delay(50);
  }

}
