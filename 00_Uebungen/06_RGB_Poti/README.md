# Übung RGB Poti

Erweitere den Code so dass du Farben in der RBG LED mischen kannst. 


</br>

<h3>Befehlsliste</h3>

<ul>
<li>pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN</li>
<li>digitalWrite (PIN, HIGH oder LOW); <- schaltet eine etwas EIN (HIGH) oder AUS (LOW)</li>
<li>digitalRead(PIN); <- liest den PIN aus. Falls Strom ankommt ist es HIGH und kein Strom LOW</li>
<li>WERT = digitalRead(PIN); <- das HIGH oder LOW welches gemessen wurde, speichern wir in der Variable WERT (Achtung WERT muss bei den Variabel noch definiert werden!)</li>
<li>delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden</li>
<li>analogWrite(PIN, 0 bis 255); <- neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern du kannst eine Zahl von 0 bis 255 einsetzen.</li>
</ul> 
</br>


Ein Drehregler hat drei Anschlüsse. Außen wird + und – angeschlossen. Von dem mittleren Pin geht ein Kabel zu einem analogen Eingangspin am Mikrocontroller-Board. 
Wenn man den Drehregler dreht, dann gibt der mittlere Pin eine Spannung zwischen 0 und 5 Volt aus. 
Drehregler ganz links: 0 V und Drehregler ganz rechts: 5V, bzw. Seitenverkehrt, je nach Verkabelung.

Die LED darf mit ana­log­Wri­te höchs­ten mit dem Wert 255 ange­steu­ert wer­den, der Poten­tio­me­ter kennt aber Wer­te zwi­schen 0 (= 0 Volt) und 1023 (= 5 Volt).

<div style="text-align:center;">
  <img src="https://github.com/tueftelPark/Einfuehrung/assets/113671718/748e3807-ce4f-4e8c-b209-807e03311c6f" alt="Beschreibung des Bildes">
</div>

