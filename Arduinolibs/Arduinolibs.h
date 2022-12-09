#ifndef arduinolibs
#define arduinolibs
#include "Arduino.h"
class Arduinolibs{
    public:
    void piscaTempo(int _pin ,int ms);
    int leituraPin(int _pn);
    void acionamento(int btn, int porta);
    private:
    int estado;
};
#endif