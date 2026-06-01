#ifndef INMUEBLE_H
#define INMUEBLE_H

#include "DataTypes/DtDireccion.h"
#include "DataTypes/DtFecha.h"
#include <string>
#include <memory>

class Inmueble {
private:
    DtDireccion direccion;
    float superficie;
    DtFecha anioConstruccion;
    int numeroID;

public:
    // Constructores
    Inmueble();
    Inmueble(const DtDireccion& direccion, float superficie,
             const DtFecha& anioConstruccion, int numeroID);

    // Getters
    DtDireccion getDireccion() const;
    float getSuperficie() const;
    DtFecha getAnioConstruccion() const;
    int getNumeroID() const;

    // Destructor
    virtual ~Inmueble() = default;
};

#endif