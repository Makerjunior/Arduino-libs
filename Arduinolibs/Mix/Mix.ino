#include <Arduinolibs.h>

Arduinolibs ObjExemplo;

void setup(){
Serial.begin(9600);
}

void loop(){
 int leitura = ObjExemplo.leituraPin(7);
Serial.print( "Leitura do botão = ");
Serial.println( leitura);



ObjExemplo.piscaTempo(13,500);

ObjExemplo.acionamento(2,13);
}