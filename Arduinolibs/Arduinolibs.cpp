#include "Arduino.h"
#include "arduinolibs.h"

// Logica da Blibioteca
// 

    // Metodos da classe 
void Arduinolibs::piscaTempo(int _pin ,int ms){
  pinMode(_pin, OUTPUT);
  static bool estado = false;
  static unsigned long tempodelay;
  if(millis() - tempodelay > ms )
  {estado = !estado ;
    digitalWrite(_pin,estado);
   tempodelay = millis();}

}

// Metodo que retorna a leitura de um pino
int Arduinolibs::leituraPin(int _pn)
{  pinMode(_pn, INPUT_PULLUP);
    return  digitalRead(_pn);
}

// Método de acionamento com botão 
void Arduinolibs::acionamento(int btn, int porta)
{
  pinMode(btn,INPUT_PULLUP);
  pinMode(porta,OUTPUT);
  this->estado = digitalRead(btn)
  digitalWrite(porta,this->estado);
 
 }





/*


*/