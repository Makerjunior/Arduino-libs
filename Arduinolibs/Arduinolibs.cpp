#include "Arduino.h"
#include "arduinolibs.h"

// Logica da Blibioteca
// Método construtor da clase que é chamado altomaticamente quando instaciamos um Objeto da classe. 
Arduinolibs::pisca(){     

}

void Arduinolibs::piscaTempo(int _pin ,int ms){

  static bool estado = false;
  static unsigned long tempodelay;
  if(millis() - tempodelay > ms )
  {estado = !estado ;
    digitalWrite(led,estado);
   tempodelay = millis();}

}

void Arduinolibs::acionamento(int btn, int porta)
{
    bool estadoanterior = false ;
  bool estadobotao = digitalRead(btn);
    bool  ligado = false;
  if((!estadobotao) && (estadoanterior))
    {ligado = true;}
estadoanterior = estadobotao; 
  digitalWrite(porta,ligado);
}

int Arduinolibs::leituraPin(int _pn)
{  
    return  digitalRead(_pn);
}



/*


*/