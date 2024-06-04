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
  servoXYZ.attach(10); //mit dem XXX.attach müssen wir definieren, wo der Servo angeschlossen ist. (XXX=Servoname)
}
void loop() {
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

if (t < 29) 
{
servoXYZ.write(0); //Position 1 ansteuern mit dem Winkel 0°
} 

else if ((t >29)&&(t <30)) 
{
servoXYZ.write(20); //Position 1 ansteuern mit dem Winkel 20°
}

else if ((t >30)&&(t <31)) 
{
servoXYZ.write(45); //Position 1 ansteuern mit dem Winkel 45°
}
}