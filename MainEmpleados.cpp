#include <iostream>
#include <iomanip>
using namespace std;

#include "EmpleadoBaseMasComision.h"
#include "EmpleadoPorComision.h"

    int main()
    {

      EmpleadoPorComision empleadoPorComision(
        "Sue", "Jones", "222-22-2222", 10000, 0.06 );

      EmpleadoPorComision *empleadoPorComisionPtr = 0;

      EmpleadoBaseMasComision empleadoBaseMasComision(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

      EmpleadoBaseMasComision *empleadoBaseMasComisionPtr = 0;
      empleadoBaseMasComisionPtr = &empleadoBaseMasComision;

      cout << fixed << setprecision( 2 );

      empleadoBaseMasComisionPtr->imprimir();

      cout << "Impresion de los objetos de clase base y clase derivada: \n\n";
      empleadoPorComision.imprimir();
      cout << "\n\n";

      empleadoPorComisionPtr = &empleadoPorComision;
      empleadoPorComisionPtr->imprimir();


      return 0;
    }






