#include <arduinolibs.h>

Arduinolibs Leitura;  // Objeto Leitura da clase Aeduinolibs 

void setup(){
Serial.begin(9600);
}

void loop(){
/**
 * A função leituraPin retorna a quem faz a chamada o valor lido no pino que foi incicado como parâmetro.
*/

 int read = Leitura.leituraPin(7);  // O valor retornado pela função é armazenado variável read 
Serial.print( "Leitura do botão = ");
Serial.println(read);




}