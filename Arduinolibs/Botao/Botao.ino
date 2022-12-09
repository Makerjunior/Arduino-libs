#include <arduinolibs.h>

Arduinolibs Btn; // Objeto da clase Aeduinolibs 

void setup(){

}

void loop(){

// Objeto chamando a função acionamento do pino 2 com resposta no pino 13 
// Acionamento em INPUT_PULLUP
Btn.acionamento(2,13); 
}