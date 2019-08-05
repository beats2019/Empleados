#include <iostream>
#include <iomanip>
using namespace std;

#include "EmpleadoBaseMasComision.h"

    int main()
    {
      cout << fixed << setprecision( 2 );

      {
          EmpleadoPorComision empleado1(
             "Bob" , "Lewis" , "43094" , 5000, 0.04 );
      }

      cout << endl;

      EmpleadoBaseMasComision
        empleado2( "Lisa", "Jones", "78433123", 2000, .06, 800 );

      cout << endl;

      EmpleadoBaseMasComision
        empleado3( "Mark", "Sands", "435654", 000, .15, 2000 );

       cout << endl;

      return 0;
    }
