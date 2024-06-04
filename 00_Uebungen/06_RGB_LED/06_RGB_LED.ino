/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- NEU: neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern eine Zahl von 0 bis 255.
*/

//Zuerst die Variabeln definieren

// TODO: Farbe rot an Pin XXX -> Wichtig nur PWM(~) nutzen! Auf deinem Arduino sind dies die Nummern mit einer kleinen Welle -> z.B. 10~
int LEDrot = XX; 
// TODO: Farbe gruen an Pin XX -> Wichtig nur PWM(~) nutzen! 
int LEDgruen = XX; 
// TODO: Farbe blau an Pin XX -> Wichtig nur PWM(~) nutzen! 
int LEDblau = XX; 

int RotAn = 255; //TEST: Variable für das Einschalten
int GruenAn = 255; //TEST: Variable für das Einschalten
int BlauAn = 255; //TEST: Variable für das Einschalten

//TODO: Ersetze das Z mit der Zahl zum Ausschalten

int BlauAus = Z; //TEST: Variable für das Ausschalten
int RotAus = Z; //TEST: Variable für das Ausschalten
int GruenAus = Z; //TEST: Variable für das Ausschalten

void setup()
{
//TODO: Definiere den Pin für die blaue LED -> Nutze die Variabeln und nicht die PIN-Zahl

//TODO: Definiere den Pin für die rote LED

//TODO: Definiere den Pin für die grüne LED
  
}

void loop()
{
  analogWrite(LEDblau, BlauAn); //Jetzt wird der PIN für die blaue LED genommen und die Helligkeit von der Variabel
  delay(1000);
  analogWrite(LEDblau, BlauAus);
  // TODO: Lasse alle anderen RGB-Farben auch NACHEINANDER leuchten -> Vergiss den delay nicht!

  
  // TODO: Lasse alle Farben gleichzeitig leuchten -> Was passiert?
 
  // TEST: Was passiert wenn du verschiedene Kombinationen gleichzeitig leuchten lässt?