/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.
*/

//Zuerst die Variabeln definieren
int LEDblau = PIN; // Farbe blau an Pin XX -> Wichtig nur PWM(~) nutzen!
int LEDrot = PIN; // Farbe rot an Pin XXX -> Wichtig nur PWM(~) nutzen!
int LEDgruen = PIN; // Farbe gruen an Pin XX -> Wichtig nur PWM(~) nutzen!

int helligkeitBlau = 255; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitRot = 0; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitGruen = 0; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)

void setup()
{
//Definiere die blaue LED

//Definiere die rote LED

//Definiere die grüne LED
  
}

void loop()
{
  analogWrite(LEDblau, helligkeitBlau); //Jetzt wird der PIN für die blaue LED genommen und die Helligkeit von der Variabel
  //füge hier noch eine Wartezeit von 1sek hinzu
  
  analogWrite(LEDblau, 25); // Du kannst auch direkt eine Nummer eingeben um die blaue LED in der Helligkeit zu wechseln
  
  // lasse alle anderen RGB-Farben auch leuchten
  // du kannst sie nacheinander leuchten lassen oder alle gleichzeitig 
  // was passiert wenn du Rot, Grün und Blau mischt? 
}
