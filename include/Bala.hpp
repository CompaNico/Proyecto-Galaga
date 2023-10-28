#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Bala : public Dibujo, public Actualizable

{
private:
    int tiempoVida;

public:
    Bala(Vector posicion) : Dibujo(posicion.LeerX(),30,"LZ")
    {
    
        this->tiempoVida = 100;
    }
    ~Bala() {}
    void Actualizar()
    {
        this->posicion.DezplazarX(10);
    }
};