#include "Arduino.h"
#include "arduinolibs.h"

// Logica da Blibioteca
// Método construtor da clase que é chamado altomaticamente quando instaciamos um Objeto da classe. 


void Arduinolibs::piscaTempo(int _pin ,int ms){

  static bool estado = false;
  static unsigned long tempodelay;
  if(millis() - tempodelay > ms )
  {estado = !estado ;
    digitalWrite(_pin,estado);
   tempodelay = millis();}

}

int Arduinolibs::leituraPin(int _pn)
{  
    return  digitalRead(_pn);
}

void Arduinolibs::acionamento(int btn, int porta)
{
  static  bool estadoanterior = false ;
static  bool estadobotao = digitalRead(btn);
    bool  ligado = false;
  if((!estadobotao) && (estadoanterior))
    {ligado = true;}
estadoanterior = estadobotao; 
  digitalWrite(porta,ligado);
}





/*


*/