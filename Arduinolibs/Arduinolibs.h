#ifndef arduinolibs
#define arduinolibs
#include "Arduino.h"
class Arduinolibs{
    public: //Métodos publicos da classe 
    void piscaTempo(int _pin ,int ms);
    int leituraPin(int _pn);
    void acionamento(int btn, int porta);
    private: // Atributo private da Class  
    int estado;    
};
#endif

/*
 Atributos são as propriedades de um objeto.
 Métodos são as ações que um objeto pode realizar.
 Os objetos são características definidas pelas classes. 
 Neles é permitido instanciar objetos da classe para inicializar os atributos e invocar os métodos.

 Em breve entraremos mais  a fundo nesses conseitos ...
*/