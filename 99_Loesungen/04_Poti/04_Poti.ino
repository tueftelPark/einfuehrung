/*Ein Drehregler hat drei Anschlüsse. Außen wird + und – angeschlossen. Von dem mittleren Pin geht ein Kabel zu einem analogen Eingangspin am Mikrocontroller-Board. 
Wenn man den Drehregler dreht, dann gibt der mittlere Pin eine Spannung zwischen 0 und 5 Volt aus. 
Drehregler ganz links: 0 V und Drehregler ganz rechts: 5V, bzw. Seitenverkehrt, je nach Verkabelung.

Die LED darf mit ana­log­Wri­te höchs­ten mit dem Wert 255 ange­steu­ert wer­den, der Poten­tio­me­ter kennt aber Wer­te zwi­schen 0 (= 0 Volt) und 1023 (= 5 Volt).
*/

//Zuerst die Variabeln definieren
int eingang= A0; //Das Wort „eingang“ steht jetzt für den PIN an welchem der Drehregler angeschlossen ist.
int LED = 13; //Das Wort „LED“ steht jetzt für den PIN an welchem die LED angeschlossen ist.
int sensorwert = 0; //Variable für den Sensorwert mit 0 als Startwert
int helligkeit = 0; //Variable für die Helligkeit mit 0 als Startwert

void setup()
{
pinMode (LED, OUTPUT); //Der Pin mit der LED (Pin XX) ist jetzt ein Ausgang.
}

void loop()
{
  sensorwert = analogRead(eingang);
  helligkeit = sensorwert/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023
  analogWrite(LED, helligkeit); 
}
