/* Befehle:
Oled.begin(); <- Startet die Kommunikation mit dem Display
Oled.setFlipMode(true oder false); <- Text auf Dsiplay wird entweder normal angezeigt oder auf dem Kopf angezeigt.
Oled.setFont(Schriftart); <- Legt die Schriftart vom Text fest
Oled.print("Text"); <- Auf dem Display wird Text angezeigt 

Oled.println("Text"); <- Am Ende vom Text wird ein Enter eingefügt, sonst gleich wie Oled.print();
*/

/*
In dieser Übung wollen wir eine einfache Zeichnung mithilfe von Text (TextArt) erstellen. 

Hier ist ein Beispiel:


^..^      /
/_/\_____/
   /\   /\
  /  \ /  \


Damit das OLED-Display den Text so darstellen kann, 
musst du jede einzelne Linie des TextArt mithilfe des Oled.println(""); Befehl anzeigen.
*/


#include <Arduino_SensorKit.h>


void setup()
{

// TODO: Starte die Kommunikation mit dem Display


Oled.setFlipMode(true); // Legt die Orientation vom Diasplay fest

}

void loop()
{
  
  Oled.setFont(u8x8_font_chroma48medium8_r); // Schriftart

  Oled.setCursor(0, 0);    // Position des Textes auf dem Display

  //TODO: Nutze Oled.println("TextArt") um das Bild auf dem Arduino anzeigen zu lassen.






  Oled.refreshDisplay();  // Aktualisiert das Diaplay
  delay(10); // kurze Wartezeit für ein flüssiges Bild auf dem Display
  

  //TODO: Erstelle jetzt dein eigenes TextArt Bild auf. Lasse es anschliessend auf dem Arduino anzeigen. (Hier einige Ideen: Katze, Katzenkopf, Fisch, Haus, Baum, Auto, etc.)
}
