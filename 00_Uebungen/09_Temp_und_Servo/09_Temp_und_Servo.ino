/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
digitalWrite(PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)
digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.
*/

/************************( Importieren der genutzten Bibliotheken )************************/
#include <Servo.h>  //Die Servobibliothek wird aufgerufen. Sie wird benötigt, damit die Ansteuerung des Servos vereinfacht wird.
#include "DHT.h"    // dht.h importieren falls nicht verfügbar            
#define DHTPIN 2          // Hier die Pin Nummer eintragen wo der Sensor angeschlossen ist
#define DHTTYPE DHT11     // Hier wird definiert was für ein Sensor ausgelesen wird. In 
                          // unserem Beispiel möchten wir einen DHT11 auslesen, falls du 
                          // ein DHT22 hast einfach DHT22 eintragen
       
/********************************( Definieren der Objekte )********************************/                          
DHT dht(DHTPIN, DHTTYPE);

 
Servo servoXYZ; //Erstellt für das Programm ein Servo mit dem Namen „servoXYZ“


void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Testprogramm");
  dht.begin();
  servoXYZ.attach(XX); // TODO: mit dem XXX.attach müssen wir definieren, wo der Servo angeschlossen ist. Fülle das XX aus.
}
void loop() {
//************ Hier nichts anpassen, das ist vom Sensor *******************************
  // Wait a few seconds between measurements.
  delay(2000);                     // Hier definieren wir die Verweilzeit die gewartet wird  
                                   // bis der Sensor wieder ausgelesen wird. Da der DHT11  
                                   // auch ca. 2 Sekunden hat um seine Werte zuaktualisieren
                                   // macht es keinen sinn ihn schneller auszulesen!
                                    
  float h = dht.readHumidity();    // Lesen der Luftfeuchtigkeit und speichern in die Variable h
  float t = dht.readTemperature(); // Lesen der Temperatur in °C und speichern in die Variable t
  

  // Nun senden wir die gemessenen Werte an den PC dise werden wir im Seriellem Monitor sehen
  Serial.print("Luftfeuchtigkeit: ");
  Serial.print(h);                  // Ausgeben der Luftfeuchtigkeit
  Serial.print("%\t");              // /t ist ein Tabulator = grösserer Abstand im Text
  Serial.print("Temperatur: ");
  Serial.print(t);                  // Ausgeben der Temperatur
  Serial.print("°");                // Schreiben des ° Zeichen
  Serial.println("C");
//**************************************************************************************
// WICHTIG: die Temperatur wird in der Variabel (t) gespeichert
// Diese Variabel können wir jetzt nutzen, um den Servo anzusteuern.
  
if (t < XX) //Wenn die Temperatur unter XX ist, dann mache ZZ
{
servoXYZ.write(0); //Position 1 ansteuern mit dem Winkel 0°
} 

else if ((t >XX)&&(t <YY)) // Wenn der Wert zwischen XX und YY ist dann mache ZZ
{
// Was soll dann geschehen? 
  // Fahre mit dem Servo eine neue Position an.
}

else if ((t >XX)&&(t <YY)) // Wenn der Wert zwischen XX und YY ist dann mache ZZ
{
// Was soll dann geschehen? 
  // Fahre mit dem Servo eine neue Position an.
}
}
