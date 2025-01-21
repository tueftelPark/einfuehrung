#include "Arduino_SensorKit.h"

/* 
>> Was soll passieren? Was ist das Ziel der Übung? <<
Der nächste Spieleabend steht an. Hast du noch echte Würfel zu Hause?
Wir nicht - Ziel ist es, dass du hier deinen eigenen Würfel machst mit dem Sensor-Kit.
Du drückst den Button und anschliessend wird dir deine Zahl auf dem OLED-Bildschirm angezeigt. 
Kannst du auch eine Zahl zwischen 1 und 12 Würfeln oder nur 1 bis 6? Probiere mal!

>> Befehle <<
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN(wo ist das Objekt angeschlossen), PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), INPUT(Sensor/Signaleingang) OUTPUT(Aktor/Signalausgang)
digitalRead(PIN); <- liest den Zustand eines digitalen Pins (HIGH oder LOW), PIN mit der Zahl auf dem SensorKit ersetzen (ohne D)
random(MIN, MAX); <- generiert eine Zufallszahl zwischen MIN (inklusive) und MAX (exklusive)
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
Oled.begin(); <- Startet die Kommunikation mit dem Display
*/

//Definiere zuerst die Variabeln
//TODO: PIN an welchem der Button (kleiner Druckknopf) angeschlossen ist - muss mit Zahl ergänzt werden
int Button = ?; 

int Zahl = 0; // nicht ändern. Dies ist ein Startwert und wird definiert damit das Arduino weiss, dass es sich im eine Zahl handelt.

int Tasterstatus = 0; // nicht ändern. Dies ist ein Startwert und wird definiert damit das Arduino weiss, dass es sich im eine Zahl handelt.


void setup() // Hier beginnt das Setup
{

  // TODO: defineire den Button als Input


  // TODO: Starte die Kommunikation mit dem Display


  Oled.setFlipMode(true); // Legt die Orientation vom Diasplay fest

} // Hier endet ein Programmabschnitt

void loop() // Hier beginnt das Hauptprogramm
{
    Oled.setFont(u8x8_font_amstrad_cpc_extended_r); //Schriftart
    Oled.setCursor(33, 66); // Position der Schrift
  // Lese den Zustand des Buttons
  Tasterstatus = digitalRead(Button);
  
  // Überprüfe, ob der Button gedrückt wurde
  if (Tasterstatus == HIGH) {
    Oled.clearDisplay();
    delay(10); 
    // Generiere eine Zufallszahl zwischen 1 und 6
    Zahl = random(1, 7);
    // Zeige das Würfelergebnis auf dem OLED-Display an

    Oled.print("...");
    delay(1000);
    Oled.clearDisplay();

    //TODO: Zeige die Zahl auf dem Arduino OLED an
    
    

    Oled.refreshDisplay(); // Update the Display

    //TODO: Warte eine halbe Sekunde, bevor ein neuer Wurf möglich ist
    
  }

  delay(10); // Kurze Pause, um das Display zu aktualisieren
} // Hier endet ein Programmabschnitt
