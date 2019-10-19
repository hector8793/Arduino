int ledazul = 8;
int ledrojo = 7;
int entrada = 2;

int pulsador = 0;

int tiempo = 30;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledazul, OUTPUT);
  pinMode(ledrojo, OUTPUT);
  pinMode(entrada, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledazul,HIGH);
  delay(tiempo);
  digitalWrite(ledazul,LOW);
  delay(tiempo);
  digitalWrite(ledazul,HIGH);
  delay(tiempo);
  digitalWrite(ledazul,LOW);
  delay(150);

  digitalWrite(ledrojo,HIGH);
  delay(tiempo);
  digitalWrite(ledrojo,LOW);
  delay(tiempo);
  digitalWrite(ledrojo,HIGH);
  delay(tiempo);
  digitalWrite(ledrojo,LOW);
  delay(150);
  
  //pulsador = digitalRead(entrada);   //lee el valor del pin 2 si esta en alto o bajo
  //if (pulsador == HIGH) {            //si esta en alto el tiempo es de 30ms de lo controrio es 200ms
  //   tiempo=30;
  //  }
  //  else {
  //    tiempo=200;
  //   }
  //}

}
