#ifndef CASA_H
#define CASA_H

#include "Inmueble.h"
#include "./DataTypes/TipoTecho.h"
#include "DataTypes/DtDireccion.h"
#include "DataTypes/DtFecha.h"
class Casa : public Inmueble {
private:
    bool propiedadHorizontal;
    TipoTecho techo;

public:
    Casa();
    Casa(const DtDireccion& direccion, float superficie, const DtFecha& anioConstruccion, int numeroID, bool propiedadHorizontal, TipoTecho techo);

    bool isPropiedadHorizontal() const;
    TipoTecho getTecho() const;    
};

#endif