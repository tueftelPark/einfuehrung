/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN, PIN mit der Zahl auf dem SensorKit ersetzen (ohne D)
digitalWrite (PIN, HIGH oder LOW); <- schaltet etwas EIN (HIGH) oder AUS (LOW) - PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), dann HIGH oder LOW
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
random(Startzahl, Schlusszahl); <- generiert eine zufällige Zahl zwischen Startzahl-Schlusszahl
*/

  //TODO: XX mit der Zahl der LED ersetzen (ohne D)
int LED = XX; // Definiert die LED mit einer Variablen

void setup() // Hier beginnt das Setup
{ 
  //TODO: LED wird als Ausgang definiert - XX mit der Variabel ersetzen, YY mit OUTPUT oder INPUT ersetzen
  pinMode(XX, YY); 
} // Hier endet ein Programmabschnitt

void loop() // Hier beginnt das Hauptprogramm
{ 
  //TODO: schalte die LED ein
  digitalWrite(LED, YY);

  // Ersetze XX mit zwei Zahlen. ACHTUNG: Millisekunden
  int Zeit = random(XX, XX);

  //TODO: warte für das zufällige Zeitintervall
  delay(Zeit);

  //TODO: schalte die LED wieder aus
  digitalWrite(XX, YY);

  //TODO: Ersetze XX mit zwei Zahlen. ACHTUNG: Millisekunden
  int offTime = random(XX, XX);

  //TODO: warte für das zufällige Zeitintervall
  delay(offTime);
} // Hier endet ein Programmabschnitt
