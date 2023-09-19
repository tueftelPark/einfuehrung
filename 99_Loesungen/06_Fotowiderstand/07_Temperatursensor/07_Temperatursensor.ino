/*
Der Sensor hat drei Anschlüsse. Beim Blick auf die flache Seite des Sensors:
- links 5V
- rechts GND
- in der Mitte der Pin für das Temperatursignal

Auf dem Signalpin gibt der Sensor eine Spannung zwischen 0 und 2,0 Volt aus. Wobei 0V -50 °C entsprechen und der Wert 2,0V entspricht 150 °C. 
Laut Hersteller ist der Sensor zwischen -40 °C und +125 °C einigermaßen genau (±2 °C). 
Die Spannung dieses Pins muss vom Mikrocontroller-Board ausgelesen und in einen Temperaturwert umgerechnet werden.

ACHTUNG: Wenn der Sensor falsch angeschlossen wird, brennt er durch!

Der „map“ Befehl wird nun verwendet, um diesen Zahlenwert zwischen 0 und 410 wieder in einen Temperaturwert zwischen -50 °C und +150 °C umzuwandeln.
temperatur = map(sensorwert, 0, 410, -50, 150);
temperatur = map (a , b , c , d , e)
a= umzuwandelnde Zahl
b= minimum Messbereich
c= maximum Messbereich
d= minimum Ausgabewert
e= maximum Ausgabewert
*/


int TMP = A0; //TMP steht für den PIN an welchem der Temperatur-Sensor angeschlossen ist
int sensorwert;
int temperatur = 0; //Unter der Variablen "temperatur" wird später der Temperaturwert abgespeichert.
int t = 500; //Der Wert für „t“ gibt im Code die zeitlichen Abstände zwischen den einzelnen Messungen vor.

void setup() 
{
Serial.begin(9600); // Verbinden mit dem Serial Monitor
}

void loop() 
{
sensorwert=analogRead(TMP); //Auslesen des Sensorwertes.
temperatur= map(sensorwert, 0, 410, -50, 150); //Umwandeln des Sensorwertes mit Hilfe des "map" Befehls.
delay(t); // Nach jeder Messung ist je eine kleine Pause mit der Dauer „t“ in Millisekunden.
Serial.print(temperatur); //Nun wird der Wert „temperatur“ über die serielle Kommunikation an den PC gesendet. Durch öffnen des seriellen Monitors in der Arduino-Software kann die Temperatur abgelesen werden.
Serial.println(" Grad Celsius"); // Im seriellen Monitor wird hinter der Temperatur die Einheit eingeblendet.
}