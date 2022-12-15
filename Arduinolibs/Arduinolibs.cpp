#include "Arduino.h"
#include "arduinolibs.h"

/*
  Neste arquivo temos oa métodos da classe
  Quando usado como um tipo de retorno da função, a palavra-chave void especifica que a função não retorna um valor.
  Métodos que não possuem a palavra-chave void incorporada na declaração, mas sim um tipo de dados, apresentam em seu corpo a palavra reservada return,
  que informa que o método terá que retornar o mesmo tipo de dados com o qual foi declarado.
*/

    // Método void pisca
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

// Método de acionamento de  pino usando um Botão
void Arduinolibs::acionamento(int btn, int porta)
{
  pinMode(btn,INPUT_PULLUP);
  pinMode(porta,OUTPUT);
  this->estado = digitalRead(btn)
  digitalWrite(porta,this->estado);
}





/*


*/