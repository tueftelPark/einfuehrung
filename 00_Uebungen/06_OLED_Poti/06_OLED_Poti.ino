/* Befehle:
WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.

Oled.begin(); <- Startet die Kommunikation mit dem Display
Oled.setFlipMode(true oder false); <- Text auf Dsiplay wird entweder normal angezeigt oder auf dem Kopf angezeigt.
Oled.setFont(Schriftart); <- Legt die Schriftart vom Text fest
Oled.print("Text"); <- Auf dem Display wird Text angezeigt 

*/

#include <Arduino_SensorKit.h>


void setup()
{

// TODO: Starte doe Kommunikation mit dem Display


// TEST: Was passiert wenn du true mit false ersetzt?
Oled.setFlipMode(true); // Legt die Orientation vom Diasplay fest

}

void loop()
{
  // TODO: ersetze X mit der nummer für den Drehregler
  int sensorWert = analogRead(AX);

  
  int prozent = map(sensorWert, 0, 1023, 100, 0); // Rechnet Zahlen zwischen 1 und 1023 in Prozentwerte um.
  Oled.setFont(u8x8_font_chroma48medium8_r); // Schriftart
  Oled.setCursor(33, 33);    // Position des Textes auf dem Display
  Oled.print("Prozent:");   
  Oled.print(prozent);  // Der Wert welcher unter der Variabel gespeichert ist wird auf dem Display angezeigt.
  Oled.println("%"); 
  Oled.refreshDisplay();  // Aktualisiert das Diaplay
  delay(10); // kurze Wartezeit für ein flüssiges Bild auf dem Display
  
}
