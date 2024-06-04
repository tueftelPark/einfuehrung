/*Das Mikrocontroller-Board ist in der Lage, analoge Signale (Spannung) zu messen und diese zu verarbeiten. 
Dies geschieht mit den analogen Eingängen auf dem Board. Dieser wandelt den gemessenen Spannungswert in eine Zahl um, die dann weiter verarbeitet werden kann. 
0 Volt entspricht dabei der Zahl 0 und der höchste Messwert 5 Volt entspricht der Zahl 1023 (0 bis 1023 entspricht 1024 Zahlen = 10 Bit).
*/

int eingang= A0; //Das Wort „eingang“ steht  für den PIN an welchem der Sensor angeschlossen ist
int LED = 10; //Das Wort „LED“ steht für den PIN an welchem die LED angeschlossen ist
int sensorWert = 0; //Variable für den Sensorwert mit 0 als Startwert

void setup()
{
Serial.begin(9600); //Die Kommunikation mit dem seriellen Port wird gestartet. Das benötigt man, um sich den tatsächlich ausgelesenen Wert später im serial monitor anzeigen zu lassen.
pinMode (LED, OUTPUT); //Der Pin mit der LED (Pin XX) ist jetzt ein Ausgang
//Der analoge Pin muss nicht definiert werden.
}

void loop()
{
sensorWert = analogRead(eingang); //Die Spannung an dem Fotowiderstand auslesen und unter der Variable „sensorWert“ abspeichern.
Serial.print("Sensorwert = " ); //Ausgabe am Serial-Monitor: Das Wort „Sensorwert: „
Serial.println(sensorWert); //Ausgabe am Serial-Monitor. Mit dem Befehl Serial.print wird der Sensorwert des Fotowiderstandes in Form einer Zahl zwischen 0 und 1023 an den serial monitor gesendet.
//ln bedeutet Neue Linie - nach diesem Wert wird in eine neue Zeile geschrieben.

if (sensorWert > 512 ) //Wenn der Sensorwert über 512 beträgt….
{
digitalWrite(LED, HIGH); //…soll die LED leuchten…
}

else //andernfalls…
{
digitalWrite(LED, LOW); //….soll sie nicht leuchten.
}
delay (50);//Eine kurze Pause, in der die LED an oder aus ist
}

