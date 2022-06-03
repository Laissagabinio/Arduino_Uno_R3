//C++
byte ledPin[] = {7, 8, 9, 10, 11, 12, 13};
int ledAgora = 0;
int direcao = 1;
int ledDelay = 100;
unsigned long changeTime;

void setup()
{
  for (int x=0; x<7; x++){
    pinMode(ledPin[x], OUTPUT);
  }
}

void loop()
{
  if ((millis() - changeTime)>ledDelay){
    changeLed();
    changeTime = millis();
  }
  }
void changeLed()
{
  for (int x=0; x<7; x++){
    digitalWrite(ledPin[x], LOW);
}
  digitalWrite(ledPin[ledAgora], HIGH);
ledAgora += direcao;
  if (ledAgora==7){
    direcao=-1;
  }
  if (ledAgora==0){
    direcao=1;
  }
}


