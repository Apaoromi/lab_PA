#ifndef INMUEBLE_H
#define INMUEBLE_H

#include "Propietario.h"

using namespace std;


class Inmueble {

private:
    DtDireccion direccion;
    string superficie;
    DtFecha anioConstruccion;
    int numeroID;
public:
    Inmueble() ;
    Inmueble(const DtDireccion& direccion, const string& superficie, const DtFecha& anioConstruccion, int numeroID);
    DtDireccion getDireccion() ;
    string getSuperficie() ;
    DtFecha getAnioConstruccion() ;
    int getNumeroID() ;


};

#endif