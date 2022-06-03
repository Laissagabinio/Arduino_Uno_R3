// C++ code
byte ledPin[] = {2,3,4,5,6,7,8};
int ledAgora = 0;
int direcao = 1;
int ledDelay;
unsigned long changeTime;
int potPin = 2;

void setup()
{
  for (int x=0; x<7; x++){
    pinMode(ledPin[x], OUTPUT);
  }
    changeTime = millis();
}

void loop()
{
  ledDelay = analogRead(potPin);
  
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