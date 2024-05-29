/*
In this application, we expect the light to turn on as long as we press the button.
When we take our hand off the button, the light turns off.

*/

#define Buton 8
#define Ledpin 10

int butonState = 0;

void setup() {

  pinMode(Buton, INPUT);
  pinMode(Ledpin, OUTPUT);


}

void loop() {

  butonState = digitalRead(Buton);
 
  if(butonState == 1)
  digitalWrite(Ledpin,HIGH);
  else
  digitalWrite(Ledpin,LOW);


}

