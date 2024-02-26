/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- NEU: neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern eine Zahl von 0 bis 255.
*/

//Zuerst die Variabeln definieren
// TODO: Farbe blau an Pin XX -> Wichtig nur PWM(~) nutzen! Auf deinem Arduino sind dies die Nummern mit einer kleinen Welle
int LEDblau = XX; 
// TODO: Farbe rot an Pin XXX -> Wichtig nur PWM(~) nutzen!
int LEDrot = XX; 
// TODO: Farbe gruen an Pin XX -> Wichtig nur PWM(~) nutzen! 
int LEDgruen = XX; 

int helligkeitBlau = 255; //TEST: Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitRot = 0; //TEST: Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitGruen = 0; //TEST: Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)

void setup()
{
//TODO: Definiere die blaue LED

//TODO: Definiere die rote LED

//TODO: Definiere die grüne LED
  
}

void loop()
{
  analogWrite(LEDblau, helligkeitBlau); //Jetzt wird der PIN für die blaue LED genommen und die Helligkeit von der Variabel
  //TODO: füge hier noch eine Wartezeit von 1sek hinzu
  
  // TODO: lasse alle anderen RGB-Farben auch leuchten
  // TODO: du kannst sie nacheinander leuchten lassen oder alle gleichzeitig 
  // TEST: was passiert wenn du Rot, Grün und Blau mischt? 
}
