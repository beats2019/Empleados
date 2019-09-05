#ifndef BASEMAS_H
#define BASEMAS_H
#include <string>
using std::string;
#include "EmpleadoPorComision.h"


class EmpleadoBaseMasComision : public EmpleadoPorComision
{

  public:

    EmpleadoBaseMasComision( const string &, const string &, const string &
                             , double = 0, double = 0, double = 0 );



    void setSalarioBase( double );
    double getSalarioBase() const;

    double ingresos() const;
    void imprimir() const;

  private:
    double salarioBase;

};

#endif // EMPLEADOBASEMASCOMISION_H
