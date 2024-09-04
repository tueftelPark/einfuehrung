/* Befehle:
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
ZAHL = analogRead(PIN); <- Wert zwischen 0 und 1023 wird am PIN gemessen. Dieser Wert wird unter der Variable "ZAHL" gespeichert.
map(WERT, VON_MIN, VON_MAX, NACH_MIN, NACH_MAX); <- ändert den Bereich eines Wertes von einem Bereich auf einen anderen 
-> WERT ist der zu ändernde Wert, VON_MIN und VON_MAX sind der alte Bereich, NACH_MIN und NACH_MAX sind der neue Bereich

Oled.begin(); <- Startet die Kommunikation mit dem Display
Oled.setFlipMode(true oder false); <- Text auf Dsiplay wird entweder normal angezeigt oder auf dem Kopf angezeigt.
Oled.setFont(Schriftart); <- Legt die Schriftart vom Text fest
Oled.print("Text"); <- Auf dem Display wird Text angezeigt 
Oled.println("Text"); <- Am Ende vom Text wird ein Enter eingefügt, sonst gleich wie Oled.print();
*/

#include <Arduino_SensorKit.h>


void setup()
{

// TODO: Starte die Kommunikation mit dem Display


// TEST: Was passiert wenn du true mit false ersetzt?
Oled.setFlipMode(true); // Legt die Orientation vom Diasplay fest

}

void loop()
{
  // TODO: ersetze ? mit der nummer für den Drehregler
  int Sensorwert = analogRead(A?);

  
  int Prozent = Sensorwert/10.23; //Der Sensorwert wird in eine Zahl zwischen 0-100 umgerechnet
  Oled.setFont(u8x8_font_chroma48medium8_r); // Schriftart
  Oled.setCursor(33, 33);    // Position des Textes auf dem Display
  Oled.print("Prozent:");   
  Oled.print(Prozent);  // Der Wert welcher unter der Variabel gespeichert ist wird auf dem Display angezeigt.
  Oled.println("%"); 
  Oled.refreshDisplay();  // Aktualisiert das Diaplay
  delay(10); // kurze Wartezeit für ein flüssiges Bild auf dem Display
  
}
