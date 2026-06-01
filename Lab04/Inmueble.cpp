#include "Inmueble.h"


// Constructor por defecto
Inmueble::Inmueble() 
    : direccion("", 0, ""), superficie(0.0f), anioConstruccion(1, 1, 1900), numeroID(0) {}

// Constructor con parámetros
Inmueble::Inmueble(const DtDireccion& direccion, float superficie, 
                   const DtFecha& anioConstruccion, int numeroID)
    : direccion(direccion), superficie(superficie), 
      anioConstruccion(anioConstruccion), numeroID(numeroID) {}


DtDireccion Inmueble::getDireccion() const {
    return direccion;
}

float Inmueble::getSuperficie() const { 
    return superficie;
}

DtFecha Inmueble::getAnioConstruccion() const {
    return anioConstruccion;
}

int Inmueble::getNumeroID() const {
    return numeroID;
}