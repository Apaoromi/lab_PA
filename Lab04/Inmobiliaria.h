#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H

#include "Usuario.h"
#include "DataTypes/DtDireccion.h"
#include "DataTypes/DtInmueble.h"
#include "DataTypes/DtInmobiliaria.h" // Ya incluye la definición completa de DtInmobiliaria
#include <string>
#include <set>
#include <memory>

// Forward declarations solo para lo que NO se incluyó arriba
class Propietario;
class Administracion;
struct DataFiltro; 

class Inmobiliaria : public Usuario {
private:
    DtDireccion direccionInmobiliaria;
    std::string telefono;
    std::string URL;

    std::set<std::shared_ptr<Propietario>> propietariosVinculados;
    std::set<std::shared_ptr<Administracion>> administraciones;

public:
    // Constructor por defecto
    Inmobiliaria();

    // Constructor completo
    Inmobiliaria(const std::string& nickname, const std::string& contrasenia, 
                 const std::string& email, const std::string& nombre, 
                 const DtDireccion& direccionInmobiliaria, const std::string& telefono, 
                 const std::string& URL);

    // Getters
    DtDireccion getDireccionInmobiliaria() const;
    std::string getTelefono() const;
    std::string getURL() const;

    // Métodos de comportamiento
    void vincularPropietario(std::shared_ptr<Propietario> p);
    
    // CORREGIDO: Ahora coincide exactamente con el tipo de retorno del .cpp
    DtInmobiliaria getDatos();
    
    std::set<DtInmueble> listarInmuebles();
    
    DataFiltro getDatosFiltro();
};

#endif