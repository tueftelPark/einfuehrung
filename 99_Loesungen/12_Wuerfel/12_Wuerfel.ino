
/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN, PIN mit der Zahl auf dem SensorKit ersetzen (ohne D)
digitalRead(PIN); <- liest den Zustand eines digitalen Pins (HIGH oder LOW), PIN mit der Zahl auf dem SensorKit ersetzen (ohne D)
random(MIN, MAX); <- generiert eine Zufallszahl zwischen MIN (inklusive) und MAX (exklusive)
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
*/

#include "Arduino_SensorKit.h"

//Definiere zuerst die Variabeln
//TODO: PIN an welchem der Button (kleiner Druckknopf) angeschlossen ist - muss mit Zahl ergänzt werden
int Button = 4; 

int Zahl = 0;

int Tasterstatus=0; // nicht ändern. Dies ist ein Startwert und wird definiert damit das Arduino weiss, dass es sich im eine Zahl handelt.


void setup() // Hier beginnt das Setup
{

  // TODO: Nutze hier die Variabel für den Button. Ist es ein INPUT oder OUTPUT?
  pinMode(Button, INPUT); 

  // TODO: Starte die Kommunikation mit dem Display
  Oled.begin();

  Oled.setFlipMode(true); // Legt die Orientation vom Diasplay fest

} // Hier endet ein Programmabschnitt

void loop() // Hier beginnt das Hauptprogramm
{
    Oled.setFont(u8x8_font_amstrad_cpc_extended_r); //Schriftart
    Oled.setCursor(33, 50); // Position der Schrift
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
    Oled.print(Zahl);
    Oled.refreshDisplay(); // Update the Display

    // Warte eine halbe Sekunde, bevor ein neuer Wurf möglich ist
    delay(500);
  }

  delay(10); // Kurze Pause, um das Display zu aktualisieren
} // Hier endet ein Programmabschnitt
