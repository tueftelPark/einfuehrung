/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.
*/


/*Ein Drehregler hat drei Anschlüsse. Außen wird + und – angeschlossen. Von dem mittleren Pin geht ein Kabel zu einem analogen Eingangspin am Mikrocontroller-Board. 
Wenn man den Drehregler dreht, dann gibt der mittlere Pin eine Spannung zwischen 0 und 5 Volt aus. 
Drehregler ganz links: 0 V und Drehregler ganz rechts: 5V, bzw. Seitenverkehrt, je nach Verkabelung.

Die LED darf mit ana­log­Wri­te höchs­ten mit dem Wert 255 ange­steu­ert wer­den, der Poten­tio­me­ter kennt aber Wer­te zwi­schen 0 (= 0 Volt) und 1023 (= 5 Volt).
*/

//Zuerst die Variabeln definieren
int potiBlau= A0; //TODO: Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.
int potiRot= A1; //TODO: Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.
int potiGruen= A2; //TODO: Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.

int LEDblau = 3; // Farbe blau an Pin 3 -> Wichtig nur PWM(~) nutzen!
// TODO: Ergänze noch rot und grün

int sensorwertBlau = 0; //Variable für den Sensorwert mit 0 als Startwert
// TODO: Ergänze noch rot und grün

int helligkeitBlau = 0; //TEST: Variable für die Helligkeit mit 0 als Startwert
// TODO: Ergänze noch rot und grün

void setup()
{
pinMode(LEDblau, mode); // TODO: ist es ein OUTPUT oder INPUT?
// TODO: Ergänze noch rot und grün
  
}

void loop()
{
  sensorwertBlau = analogRead(potiBlau);
  helligkeitBlau = sensorwertBlau/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023
  analogWrite(LEDblau, helligkeitBlau); 

  // TODO: mach das ganze noch für ROT und GRÜN
  
}
