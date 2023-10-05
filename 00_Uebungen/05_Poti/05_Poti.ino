/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.
*/

/*
Ein Drehregler hat drei Anschlüsse. Außen wird + und – angeschlossen. Von dem mittleren Pin geht ein Kabel zu einem analogen Eingangspin am Mikrocontroller-Board. 
Wenn man den Drehregler dreht, dann gibt der mittlere Pin eine Spannung zwischen 0 und 5 Volt aus. 
Drehregler ganz links: 0 V und Drehregler ganz rechts: 5V, bzw. Seitenverkehrt, je nach Verkabelung.

Du weisst bereits, die LED darf mit ana­log­Wri­te(PIN, 0 bis 255) höchs­ten mit dem Wert 255 ange­steu­ert wer­den, der Poten­tio­me­ter kennt aber Wer­te zwi­schen 0 (= 0 Volt) und 1023 (= 5 Volt).
Unten im Programm siehst du, dass wir den Wert des Potentiometer zuerst umrechnen müssen. Keine Angst, dies habe ich bereits für dich gemacht ;)
*/

//Zuerst die Variabeln definieren
int LED = XX; // TODO: Das Wort „LED“ steht jetzt für den PIN an welchem die LED angeschlossen ist. -> Wichtig nur PWM(~) nutzen!
int eingang= A0; //TODO: Das Wort „eingang“ steht jetzt für den ANALOGEN PIN an welchem der Drehregler angeschlossen ist.
int sensorwert = 0; //Variable für den Sensorwert mit 0 als Startwert
int helligkeit = 0; //Variable für die Helligkeit mit 0 als Startwert

void setup()
{
pinMode (LED, OUTPUT); //Der Pin mit der LED (Pin XX) ist jetzt ein Ausgang.
}

void loop()
{
  sensorwert = analogRead(eingang); // das kennst du bereits, wir lesen den eingang aus und speichern dies im sensorwert
  helligkeit = sensorwert/4; //1023 / 4 = 255 --> analogWrite geht nur bis 255 und Poti bis 1023 
  //der sensorwert haben wir umgerechnet in die helligkeit und diese nutzen wir wie bekannt zum Steuern der Helligkeit unserer LED
  analogWrite(LED, helligkeit); 

//TODO: Versuche weitere LED's anzusteuern - schaffst du das? 
}
