#include "Arduino.h"
#include "arduinolibs.h"

// Logica da Blibioteca
// Método construtor da clase que é chamado altomaticamente quando instaciamos um Objeto da classe. 


void Arduinolibs::piscaTempo(int _pin ,int ms){
  pinMode(_pin, OUTPUT);
  static bool estado = false;
  static unsigned long tempodelay;
  if(millis() - tempodelay > ms )
  {estado = !estado ;
    digitalWrite(_pin,estado);
   tempodelay = millis();}

}

int Arduinolibs::leituraPin(int _pn)
{  pinMode(_pn, INPUT_PULLUP);
    return  digitalRead(_pn);
}

void Arduinolibs::acionamento(int btn, int porta)
{
  pinMode(btn,INPUT_PULLUP);
  pinMode(porta,OUTPUT);
  this->estado = digitalRead(btn)
  digitalWrite(porta,this->estado);
 
 }





/*


*/