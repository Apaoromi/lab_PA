#include "Inmobiliaria.h"
#include "Propietario.h"
#include "Administracion.h"
#include "DataTypes/DtInmueble.h"
#include "DataTypes/DtInmobiliaria.h"

// Constructor
Inmobiliaria::Inmobiliaria(const std::string& nickname,
                           const std::string& contrasenia,
                           const std::string& email,
                           const std::string& nombre,
                           const DtDireccion& direccion,
                           const std::string& telefono,
                           const std::string& url)
    : Usuario(nickname, contrasenia, nombre, email),
      direccionInmobiliaria(direccion),
      telefono(telefono),
      URL(url) {
}

// Vincular Propietario (Fun8)
void Inmobiliaria::vincularPropietario(std::shared_ptr<Propietario> p) {
    propietariosVinculados.insert(p);
}

// Getters
DtDireccion Inmobiliaria::getDireccionInmobiliaria() const {
    return direccionInmobiliaria;
}

std::string Inmobiliaria::getTelefono() const {
    return telefono;
}

std::string Inmobiliaria::getURL() const {
    return URL;
}

// getDatos (CORREGIDO para la clase inmutable)
DtInmobiliaria Inmobiliaria::getDatos() {

    return DtInmobiliaria(this->getNickname(), this->getNombre());
}

// Listar inmuebles administrados
std::set<DtInmueble> Inmobiliaria::listarInmuebles() {
    std::set<DtInmueble> resultado;

    for (const auto& admin : administraciones) {
        resultado.insert(admin->getDatos());
    }

    return resultado;
}

// Datos filtro
DataFiltro Inmobiliaria::getDatosFiltro() {
    DataFiltro dto;
    return dto;
}