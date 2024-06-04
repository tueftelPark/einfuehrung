//Zuerst die Variabeln definieren
int LEDblau = 3; // Farbe blau an Pin 3 -> Wichtig nur PWM(~) nutzen!
int LEDrot = 5; // Farbe rot an Pin 5 -> Wichtig nur PWM(~) nutzen!
int LEDgruen = 6; // Farbe gruen an Pin 6 -> Wichtig nur PWM(~) nutzen!

int helligkeitBlau = 0; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitRot = 0; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)
int helligkeitGruen = 0; //Variable für die Helligkeit  > eine Zahl zwischen 0 (aus) und 255 (ganz hell)

void setup()
{
pinMode(LEDblau, OUTPUT);
pinMode(LEDrot, OUTPUT);
pinMode(LEDgruen, OUTPUT);
}

void loop()
{
  analogWrite(LEDblau, helligkeitBlau); 
  analogWrite(LEDrot, helligkeitRot); 
  analogWrite(LEDgruen, helligkeitGruen); 
  delay(1000);
  analogWrite(LEDblau, 125); 
  analogWrite(LEDrot, 300); 
  analogWrite(LEDgruen, 75); 
}