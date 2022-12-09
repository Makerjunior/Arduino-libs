#include <arduinolibs.h>

Arduinolibs ObjExemplo;

void setup(){
Serial.begin(9600);
}

void loop(){
 int leitura = ObjExemplo.leituraPin(10);
Serial.println( "Leitura do botão = "+ leitura);

ObjExemplo.piscaTempo(13,500);

ObjExemplo.acionamento(2,11);
}