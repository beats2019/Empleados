#ifndef EMPLEADOPORCOMISION_H
#define EMPLEADOPORCOMISION_H
#include <string>
using std::string;

class EmpleadoPorComision
{
    public:
        EmpleadoPorComision( const string &, const string &, const string &
                            , double = 0, double = 0 );


        void setPrimerNombre( const string & );
        string getPrimerNombre() const;

        void setApellidoPaterno( const string & );
        string getApellidoPaterno() const;

        void setNumeroSeguroSocial( const string & );
        string getNumeroSeguroSocial() const;

        void setVentasBrutas( double );
        double getVentasBrutas() const;

        void setTarifaComision( double );
        double getTarifaComision() const;

        double ingresos() const;
        void imprimir() const;

    private:
        string primerNombre;
        string apellidoPaterno;
        string numeroSeguroSocial;
        double ventasBrutas;
        double tarifaComision;

};

#endif // EMPLEADOPORCOMISION_H
