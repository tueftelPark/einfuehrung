/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- NEU: neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern eine Zahl von 0 bis 255.
ZAHL = analogRead(PIN); <- Wert zwischen 0 und 1023 wird am PIN gemessen. Dieser Wert wird unter der Variable "ZAHL" gespeichert.
*/

  int helligkeit = 0;
  
  int sensorWert = 0;
  //TODO: Definiere Poti mit der ensprechenden AX Nummer auf dem Sensor Kit. Ersetze X mit einer Zahl (A inkulsive -> z.B. A7)
  int Poti = AX;

  //TODO: Defiere die Variabeln Rot, Blau und Gruen mit den jeweiligen PIN-Nummern. Erestze XX mit der richtigen Zahl (Du musst die PINs 9, 10 ,11 und GND wählen)
  int Rot = XX;
  //TODO: Wiederhole dies für Blau und Gruen
  


void setup() // Hier beginnt das Setup
{ 
  //TODO: Rot, Blau und Gruen werden als Ausgang definiert. Ersetze YY mit OUTPUT oder INPUT
  pinMode(Rot, YY); 
  //TODO: definiere die weiteren Farben als Ausgang.


  //TODO: Der Potentiometer wird als Eingang definiert. 
  
} 

void loop() // Hier beginnt das Hauptprogramm
{ 
  //TODO: Definiert die Variable sensorWert und liest den Wert vom Potentiometer. Ersetze YY mit der richtigen Variabel.
  sensorWert = analogRead(YY); 

  helligkeit = sensorwert/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023 

  //Setze alle Farbkanäle der RGB-LED auf den gleichen Wert, um weißes Licht zu erzeugen
  analogWrite(Rot, helligkeit); // Rot
  //TODO: Wiederhole dies mit den weiteren zwei Farben


  //TODO: Warte 100 Millisekunden, bevor das Programm neu startet
  
} 
