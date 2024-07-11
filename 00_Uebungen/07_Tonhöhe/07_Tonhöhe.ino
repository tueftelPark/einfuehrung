/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN, PIN mit einer Zahl ersetzen
analogRead(PIN); <- liest den Wert eines analogen Pins, PIN mit einer Zahl ersetzen, gibt einen Wert zwischen 0 und 1023 zurück
tone(PIN, FREQUENZ); <- erzeugt einen Ton mit einer bestimmten Frequenz am PIN, PIN mit einer Zahl und FREQUENZ mit einer Zahl in Hertz ersetzen
noTone(PIN); <- stoppt den Ton am PIN, PIN mit einer Zahl ersetzen
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
*/

void setup() // Hier beginnt das Setup
{ 

  // Ersetze XX mit einer Zahl (ohne D) -> Die Zahl wird jetzt unter der Variable Buzzer abgespeichert.
  int Buzzer = XX;
  // Ersetze X mit einer Zahl (inklusive A -> z.B. A7)
  int Poti = AX;
  //TODO: Der Buzzer wird als Ausgang definiert. 
   

  //TODO: Der Pin für den Potentiometer wird als Eingang definiert. 
  
} 

void loop() // Hier beginnt das Hauptprogramm
{ 
  //TODO: Definiere die Variable sensorWert und diese liest den Wert vom Potentiometer. Ersetze XX mit der Variable für den Buzzer
  int sensorWert = analogRead(XX); 

  //Mappe den Sensorwert (0-1023) auf eine Frequenz (200-2000 Hz) -> Die Frequenz ergibt die Tonhöhe
  int frequenz = map(sensorWert, 0, 1023, 200, 2000);

  //TODO: Erzeuge einen Ton für 1 Sekunde. Ersetze XX mit der entsprechenden Zahl.
  tone(Buzzer, frequenz);
  delay(XX);
  //TODO: stoppe den Ton beim Buzzer (nutze die Variable und nicht die Zahl!)
  

  //TODO: Warte 5 Sekunden, bevor das Programm neu startet
  
} 
