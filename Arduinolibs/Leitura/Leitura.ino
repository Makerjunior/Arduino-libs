#include <arduinolibs.h>

Arduinolibs Leitura;  // Objeto Leitura da clase Aeduinolibs 

void setup(){
Serial.begin(9600);
}

void loop(){
/**
 * A função leituraPin retorna a quem faz a chamada o valor lido no pino que foi pasado como parâmetro 
*/

 int read = Leitura.leituraPin(7);  // O valor retornado pela função sendo quardado na variável read 
Serial.print( "Leitura do botão = ");
Serial.println(read);




}