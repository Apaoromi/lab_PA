#ifndef VISITA_H
#define VISITA_H

#include <string>
#include "./DataTypes/DtFecha.h"
#include "Cliente.h"
#include "Publicacion.h"

using namespace std;

class Visita {

private:
    DtFecha fechavisita;
    string contacto;

public:
    Visita(const DtFecha& fechavisita, const string& contacto);
    ~Visita();

    DtFecha getFechaVisita() const;
    string getContacto() const;

};

#endif 