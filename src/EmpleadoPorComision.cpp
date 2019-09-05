#include "EmpleadoPorComision.h"
#include <iostream>
#include <string>
using namespace std;

    EmpleadoPorComision::EmpleadoPorComision(
       const string &nombre, const string &apellido, const string &nss,
       double ventas, double tarifa )
       :primerNombre( nombre ), apellidoPaterno( apellido ), numeroSeguroSocial( nss )
    {
       setVentasBrutas( ventas );
       setTarifaComision( tarifa );

    }

    void EmpleadoPorComision::setPrimerNombre( const string &nombre )
    {
        primerNombre = nombre;
    }

    string EmpleadoPorComision::getPrimerNombre() const
    {
        return primerNombre;
    }

    void EmpleadoPorComision::setApellidoPaterno( const string &apellido)
    {
        apellidoPaterno = apellido;
    }

    string EmpleadoPorComision::getApellidoPaterno() const
    {
        return apellidoPaterno;
    }

    void EmpleadoPorComision::setNumeroSeguroSocial( const string &nns)
    {
        numeroSeguroSocial = nns;
    }

    string EmpleadoPorComision::getNumeroSeguroSocial() const
    {
        return numeroSeguroSocial;
    }

    void EmpleadoPorComision::setVentasBrutas( double ventas )
    {
        ventasBrutas = ( ventas < 0 ) ? 0 : ventas;
    }

    double EmpleadoPorComision::getVentasBrutas() const
    {
        return ventasBrutas;
    }

    void EmpleadoPorComision::setTarifaComision( double tarifa )
    {
        tarifaComision = ( tarifa > 0 and tarifa < 1 ) ? tarifa : 0;
    }

    double EmpleadoPorComision::getTarifaComision() const
    {
        return tarifaComision;
    }

    double EmpleadoPorComision::ingresos() const
    {
        return getTarifaComision() * getVentasBrutas();
    }

    void EmpleadoPorComision::imprimir() const
    {
        cout << "Empleado por comision: " << getPrimerNombre() << " " << getApellidoPaterno()
        <<"\nnumero de seguro social: " << getNumeroSeguroSocial()
        << "\nventas brutas: " << getVentasBrutas()
        <<"\ntarifa de comision: " << getTarifaComision();
    }










