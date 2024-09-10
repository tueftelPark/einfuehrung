/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN(wo das Objekt angeschlossen), PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), INPUT(Sensor/Signaleingang) OUTPUT(Aktor/Signalausgang)
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
tone(PIN, FREQUENZ); <- erzeugt einen Ton mit einer bestimmten Frequenz am PIN, PIN mit einer Zahl und FREQUENZ mit einer Zahl in Hertz ersetzen
noTone(PIN); <- stoppt den Ton am PIN, PIN mit einer Zahl ersetzen
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
*/

//Die Erzeugung des Tones basiert massgeblich auf dem Befehl „tone(x, y)“, 
//wobei der x-Wert den Pin angibt, an dem der Lautsprecher mit der positiven Seite angeschlossen ist und der y-Wert, der die Tonhöhe angibt.

/*-> NEU: Wir lernen Variabeln! Eine Variabel ist ein Wort welche wir anstelle einer Zahl verwenden können
mit int sagen wir dem Arduino, dass es sich um eine Zahl handelt. int Button = 6; bedeutet wir geben dem Wort Button die Zahl 6.
Jedes Mal wenn wir das Wort Button nutzen, dann nimmt das Arduino die Zahl 6. In unserem Fall ist die Zahl 6 der PIN an welchem
der Button angeschlossen ist.
*/

//Definiere zuerst die Variabeln
//TODO: PIN-Nummer für den Button auf dem SensorKit (ohne D)

int Taster = ? ; 
int Button = XX ;

//TODO: PIN-Nummer für den Buzzer auf dem SensorKit (ohne D) - muss mit Zahl ergänzt werden - der Buzzer ist der kleine schwarze "Lautsprecher"
int Buzzer = ? ; 

//TODO: Millisekunden anpassen. hier definieren wir die Zeit im Befehl delay(ZEIT) - den kennst du noch von der LED Übung! 
int Spielzeit = ???? ; 

int Tasterstatus=0; // nicht ändern. Dies ist ein Startwert und wird definiert damit das Arduino weiss, dass es sich um eine Zahl handelt.
int Buttonstatus=0; // nicht ändern. Dies ist ein Startwert und wird definiert damit das Arduino weiss, dass es sich im eine Zahl handelt.


void setup()
{

pinMode(Button, INPUT); // Hier nutzen wir das Wort Button als PIN-Nummer welche oben definiert ist in den Variabeln 
// und der Button in ein Input, da wir den Strom messen am PIN

// TODO: Definiere den PIN für den Buzzer. Nutze hier die Variabel! Ist es INPUT oder OUTPUT?



}

void loop()
{
Buttonstatus = digitalRead(Button); // hier lesen wir am PIN mit digitalRead(PIN) einen Wert aus 
//Der Wert wird unter Buttonstatus abgespeichert.

//NEU: Wir lernen if & else - wenn das passiert mache das (if) und anonsten das andere (else)
if (Buttonstatus == HIGH) // Wenn der Button gedrückt ist... also wenn der PIN Strom bekommt, dann ist das Signal HIGH
{
tone(Buzzer, 300); // …spiele diesen Ton... //TEST: Verändere die Zahl in diesem Befehel - was passiert?
  
//TODO: Füge hier eine Pause mit der Länge "Spielzeit" ein. Nutze die Variabel nicht die Zahl.

noTone(Buzzer); // Ton abschalten
}
else {
  // wenn nichts gedrückt wird, mache nichts
  // hier musst du nichts ergänzen
  //TEST: Falls du möchtest kannst du hier etwas programmieren - was soll passieren wenn der Button nicht gedrückt wird? 
  //TEST: Leuchtet eine LED? Du darfst dein Wissen von Übung 1 und 2 auch hier anwenden
}
}

