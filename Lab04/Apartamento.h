#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Inmueble.h"

class Apartamento : public Inmueble {

private:
    int numeroPiso;
    bool tieneAscensor;
    float gastosComunes;
public:
    Apartamento();
    Apartamento(const DtDireccion& direccion, const string& superficie, const DtFecha& anioConstruccion, int numeroID, int numeroPiso, bool tieneAscensor, float gastosComunes);

    int getNumeroPiso() const;
    bool tieneAscensor() const;
    float getGastosComunes() const;

};
#endif
