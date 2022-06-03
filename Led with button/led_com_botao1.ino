// C++ code
int ledVerd = 13;
int ledAmar = 12;
int ledVerm = 8;
int ledVerdP = 6;
int ledVermP = 4;
int botao = 2;
int travessia = 5000;
unsigned long changeTime;

void setup(){
  pinMode(ledVerd, OUTPUT);
  pinMode(ledAmar, OUTPUT);
  pinMode(ledVerm, OUTPUT);
  pinMode(ledVerdP, OUTPUT);
  pinMode(ledVermP, OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(ledVerd, HIGH);
  digitalWrite(ledVermP, HIGH);
}

void loop()
{
  int state = digitalRead(botao);
  if (state == HIGH && (millis() - changeTime) > 5000) {
	mudanca();
}
}
void mudanca()
{
  digitalWrite(ledVerd, LOW);
  digitalWrite(ledAmar, HIGH); 
  delay(2000); 
  digitalWrite(ledAmar, LOW); 
  digitalWrite(ledVerm, HIGH); 
  delay(1000); 
  digitalWrite(ledVermP, LOW); 
  digitalWrite(ledVerdP, HIGH); 
  delay(travessia); 
  
  for (int x=0; x<10; x++) {
  	digitalWrite(ledVerdP, HIGH);
  	delay(350);
  	digitalWrite(ledVerdP, LOW);
  	delay(350);
}

digitalWrite(ledVermP, HIGH);
delay(500);
digitalWrite(ledAmar, HIGH); 
digitalWrite(ledVerm, LOW); 
delay(1000);
digitalWrite(ledVerd, HIGH); 
digitalWrite(ledAmar, LOW); 
changeTime = millis();
}
