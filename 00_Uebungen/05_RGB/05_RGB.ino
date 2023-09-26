/*Ein Drehregler hat drei Anschlüsse. Außen wird + und – angeschlossen. Von dem mittleren Pin geht ein Kabel zu einem analogen Eingangspin am Mikrocontroller-Board. 
Wenn man den Drehregler dreht, dann gibt der mittlere Pin eine Spannung zwischen 0 und 5 Volt aus. 
Drehregler ganz links: 0 V und Drehregler ganz rechts: 5V, bzw. Seitenverkehrt, je nach Verkabelung.

Die LED darf mit ana­log­Wri­te höchs­ten mit dem Wert 255 ange­steu­ert wer­den, der Poten­tio­me­ter kennt aber Wer­te zwi­schen 0 (= 0 Volt) und 1023 (= 5 Volt).
*/

//Zuerst die Variabeln definieren
int potiBlau= A0; //Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.
int potiRot= A1; //Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.
int potiGruen= A2; //Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.

int LEDblau = 3; // Farbe blau an Pin 3 -> Wichtig nur PWM(~) nutzen!
int LEDrot = 5; // Farbe rot an Pin 5 -> Wichtig nur PWM(~) nutzen!
int LEDgruen = 6; // Farbe gruen an Pin 6 -> Wichtig nur PWM(~) nutzen!

int sensorwertBlau = 0; //Variable für den Sensorwert mit 0 als Startwert
int sensorwertRot = 0; //Variable für den Sensorwert mit 0 als Startwert
int sensorwertGruen = 0; //Variable für den Sensorwert mit 0 als Startwert

int helligkeitBlau = 0; //Variable für die Helligkeit mit 0 als Startwert
int helligkeitRot = 0; //Variable für die Helligkeit mit 0 als Startwert
int helligkeitGruen = 0; //Variable für die Helligkeit mit 0 als Startwert

void setup()
{
pinMode(LEDblau, OUTPUT);
pinMode(LEDrot, OUTPUT);
pinMode(LEDgruen, OUTPUT);
}

void loop()
{
  sensorwertBlau = analogRead(potiBlau);
  helligkeitBlau = sensorwertBlau/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023
  analogWrite(LEDblau, helligkeitBlau); 

  sensorwertRot = analogRead(potiRot);
  helligkeitRot = sensorwertRot/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023
  analogWrite(LEDrot, helligkeitRot); 

  sensorwertGruen = analogRead(potiGruen);
  helligkeitGruen = sensorwertGruen/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023
  analogWrite(LEDgruen, helligkeitGruen); 
}
