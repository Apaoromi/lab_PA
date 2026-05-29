#ifndef DTDIRECCION_H
#define DTDIRECCION_H

#include <stdexcept>

using namespace std;

class DtDireccion {

private:
    string calle ;
    int numero ;
    string ciudad ;

public:
    DtDireccion() ;
    DtDireccion( const string & calle, int numero, const string & ciudad ) ;

    string getCalle() ;
    int getNumero() ;
    string getCiudad() ;

};

#endif
