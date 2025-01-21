/* 
>> Was soll passieren? Was ist das Ziel der Übung? <<
Schon mal etwas gezeichnet mit Buchstaben oder anderen Text-Symbolen?
Du kannst ja mal unser Hund ausprobieren. Cool oder?
Versuche jetzt verschiedene Sachen zu zeichnen :) 

>> Befehle <<
Oled.begin(); <- Startet die Kommunikation mit dem Display
Oled.setFlipMode(true oder false); <- Text auf Dsiplay wird entweder normal angezeigt oder auf dem Kopf angezeigt.
Oled.setFont(Schriftart); <- Legt die Schriftart vom Text fest
Oled.print("Text"); <- Auf dem Display wird Text angezeigt 

Oled.println("Text"); <- Am Ende vom Text wird ein Enter eingefügt, sonst gleich wie Oled.print();
*/

/*
In dieser Übung wollen wir eine einfache Zeichnung mithilfe von Text (TextArt) erstellen. 
ACHTUNG, Backslash \ wird nur angezeigt, wenn du zwei \\ machst!! 
=> Zwei \\ werden als ein \ auf dem Oled dargestellt.

Hier ist einige Beispiel:


Oled.println("^..^      /");
Oled.println("/_/_____/");
Oled.println("   /   /");
Oled.println("  /   / ");

Oled.println("  / \\__");
Oled.println(" (    @\\____");
Oled.println(" /         O");
Oled.println("/   (_____/");
Oled.println("/_____/   U");

Oled.println(" (\\_/)");
Oled.println(" (o.o)");
Oled.println(" (> <)");


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
  //Hier einige Ideen: Katze, Katzenkopf, Fisch, Haus, Baum, Auto, etc.





  Oled.refreshDisplay();  // Aktualisiert das Diaplay
  delay(10); // kurze Wartezeit für ein flüssiges Bild auf dem Display


  //TODO: Erstelle ein Daumenkinofilm auf dem Arduino
  //      Achtung. Du musst zwischen jedem Bild ein "delay(XX);" und ein "Oled.clear();" machen

}
