#include <Servo.h>
Servo s;

int pos_s = 0;
int luz = 5;

void setup()
{
  s.attach(3);
  s.write(pos_s);
  pinMode(5, OUTPUT);
}

void loop()
{
  for(pos_s = 0; pos_s < 180; pos_s++)
  {
    s.write(pos_s);
    light();
    delay(15);
  }
   delay(2000);
  	for(pos_s = 180; pos_s > 0; pos_s--)
    {
      s.write(pos_s);
      light();
      delay(15);
    }
}
void light(){
  if(pos_s>100){
    digitalWrite(luz, HIGH);
}
}
