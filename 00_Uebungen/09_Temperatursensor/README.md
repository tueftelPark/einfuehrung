# Übung Temperatursensor

<h4>Dieser Code muss nicht erweitert werden!</h4>
Du musst nichts änderen am Programm. Du kannst es durchlesen und versuchen zu verstehen.
Öffne den Serial Monitor oben rechts bei der Lupe und schaue die Werte an, welche der Sensor ausgibt.
Wenn wir Sensoren verwenden, dann werden die Programme oft vorgegben und wir können diese kostenlos nutzen, um den Sensor anzusteuern.
Bei der nächsten Übung werden wir die Temperatur nutzen, um ein Objekt anzusteuern

[Bei Problemen mit der Bibliothek oder mit dem Code klicke hier](#FAQ)
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



![20160425-DHT11_V1 0_Steckplatine](https://github.com/tueftelPark/Einfuehrung/assets/113671718/7bccb849-9d03-4748-9410-1f6a250a642f)

</br>

<a name="FAQ"></a>
<h4>Falls Bibliothek fehlt. So wird sie installiert:</h4>
<img width="525" alt="Bildschirmfoto 2023-09-20 um 14 08 40" src="https://github.com/tueftelPark/Einfuehrung/assets/113671718/9128ade1-1713-458a-9006-fe700b10ab50">
