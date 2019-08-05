#include "EmpleadoBaseMasComision.h"
#include <iostream>
#include <string>
using namespace std;

    EmpleadoBaseMasComision::EmpleadoBaseMasComision(
      const string &nombre, const string &apellido, const string &nss,
      double ventas, double tarifa, double salario )
      : EmpleadoPorComision( nombre, apellido, nss, ventas, tarifa )
    {
      setSalarioBase( salario );
      cout << "Constructor de EmpleadoBaseMasComision: " << endl;
       imprimir();
       cout << endl << endl;
    }

    EmpleadoBaseMasComision::~EmpleadoBaseMasComision()
    {
        cout << "Destructor de EmpleadoBaseMasComision: " << endl;
       imprimir();
       cout << endl << endl;
    }

    void EmpleadoBaseMasComision::setSalarioBase( double salario)
    {
      salarioBase = ( salario < 0 ) ? 0 : salario;
    }

    double EmpleadoBaseMasComision::getSalarioBase() const
    {
      return salarioBase;
    }

    double EmpleadoBaseMasComision::ingresos() const
    {
      return getSalarioBase() + EmpleadoPorComision::ingresos();
    }

    void EmpleadoBaseMasComision::imprimir() const
    {
      cout << "\nCon salario base ";
      EmpleadoPorComision::imprimir();

      cout << "\nsalario base: " << getSalarioBase();
    }

