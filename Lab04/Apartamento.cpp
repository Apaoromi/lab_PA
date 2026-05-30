#include "Apartamento.h"

Apartamento::Apartamento() : Inmueble(), numeroPiso(0), tieneAscensor(false), gastosComunes(0.0f) {}

Apartamento::Apartamento(const DtDireccion& direccion,
                         float superficie,
                         const DtFecha& anioConstruccion,
                         int numeroID,
                         int numeroPiso,
                         bool tieneAscensor,
                         float gastosComunes)
    : Inmueble(direccion, superficie, anioConstruccion, numeroID),
      numeroPiso(numeroPiso),
      tieneAscensor(tieneAscensor),
      gastosComunes(gastosComunes) {}

int Apartamento::getNumeroPiso() const {
    return numeroPiso;
}

bool Apartamento::getTieneAscensor() const {
    return tieneAscensor;
}

float Apartamento::getGastosComunes() const {
    return gastosComunes;
}