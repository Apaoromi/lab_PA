#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include "./DataTypes/DtFecha.h"


using namespace std;


class Publicacion {

private: 
    DtFecha fechaPublicacion;
    string texto;
    float precio;
    int id;
    bool activa;
    bool tipoPublicacion;

public:
    Publicacion();
    Publicacion(const DtFecha& fechaPublicacion, const string& texto, float precio, int id, bool activa, bool tipoPublicacion);

    DtFecha getFechaPublicacion() const;
    string getTexto() const;
    float getPrecio() const;
    int getId() const;
    bool isActiva() const;
    bool isTipoPublicacion() const;

};

#endif