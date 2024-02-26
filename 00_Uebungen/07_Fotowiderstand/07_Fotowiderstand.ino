/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.
*/

/*Das Mikrocontroller-Board ist in der Lage, analoge Signale (Spannung) zu messen und diese zu verarbeiten. 
Dies geschieht mit den analogen Eingängen auf dem Board. Dieser wandelt den gemessenen Spannungswert in eine Zahl um, die dann weiter verarbeitet werden kann. 
0 Volt entspricht dabei der Zahl 0 und der höchste Messwert 5 Volt entspricht der Zahl 1023 (0 bis 1023 entspricht 1024 Zahlen = 10 Bit).
*/

//TODO: Das Wort „eingang“ steht  für den PIN an welchem der Sensor angeschlossen ist - Nutze einen Analogen PIN
int eingang = XX; 
// TODO: Das Wort „LED“ steht für den PIN an welchem die LED angeschlossen ist - Nutze einen Digitalen PIN
int LED = XX; 


int sensorWert = 0; //Variable für den Sensorwert mit 0 als Startwert

void setup()
{
  //NEU: Serial-Monitor - Das Arduino kann dir auch Informationen anzeigen lassen, welche du ausliest. Klicke dafür oben rechts auf die Lupe
Serial.begin(9600); //Die Kommunikation mit dem seriellen Port wird gestartet. Das benötigt man, um sich den tatsächlich ausgelesenen Wert später im serial monitor anzeigen zu lassen.

//TODO: Definiere hier noch die LED

  
}

void loop()
{
sensorWert = analogRead(eingang); //Die Spannung an dem Fotowiderstand auslesen und unter der Variable „sensorWert“ abspeichern.
Serial.print("Sensorwert = " ); //Ausgabe am Serial-Monitor: Das Wort „Sensorwert: „
Serial.println(sensorWert); //Ausgabe am Serial-Monitor. Mit dem Befehl Serial.print wird der Sensorwert des Fotowiderstandes in Form einer Zahl zwischen 0 und 1023 an den serial monitor gesendet.
//ln bedeutet Neue Linie - nach diesem Wert wird in eine neue Zeile geschrieben.

if (sensorWert > 512 ) //TEST: Wenn der Sensorwert über 512 beträgt…. 
  // Starte mal das Programm und schaue, wie sich der Wert verändert, wenn du deine Hand über den Sensor haltest. 
  // Passe anschliessend den Wert im if-Statement an
{
// was soll passieren, wenn dieser Wert erreicht ist? 
// TODO: Schalte mal eine LED an

  
}

else //andernfalls…
{
// TODO: und wenn der Wert nicht erreicht wird? Dann schalte die LED aus
  
  
}
//TODO:Eine kurze Pause, in der die LED an oder aus ist
  
  
}

