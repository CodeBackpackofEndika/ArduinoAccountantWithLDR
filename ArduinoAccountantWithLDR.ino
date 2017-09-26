Byte i=0; 
Byte ldr=5; 
Float media=0; 
Int valor; 
Int suma=0; 
 
void setup() { 
Serial.begin(9600); 
} 
 
void loop() { 
if(i<100) { 
valor=analogRead(ldr); 
suma=suma+valor; 
media=suma/100.0; 
i++; 
  } 
Serial.println(media); 
 
  } 
