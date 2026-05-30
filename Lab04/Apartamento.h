#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Inmueble.h"
#include "DataTypes/DtDireccion.h"
#include "DataTypes/DtFecha.h"
class Apartamento : public Inmueble {

private:
    int numeroPiso;
    bool tieneAscensor;
    float gastosComunes;
public:
    Apartamento();
    Apartamento(const DtDireccion& direccion, float superficie, const DtFecha& anioConstruccion, int numeroID, int numeroPiso, bool tieneAscensor, float gastosComunes);

    int getNumeroPiso() const;
    bool getTieneAscensor() const;
    float getGastosComunes() const;

};
#endif
