//Clase Individual A01745041 IDM
//Ainhara Itzae Mejia Rivera

#ifndef FECHA_C
#define FECHA_C
#include "Sistema.h"
#include "Etapa.h"
#include <iostream>
#include <string>
using namespace std;

class Etapauno{
    private:
        Etapa precioproducto;
        Etapa codigo;
        Etapa cvendedor;
        Sistema numerocliente;
        string preguntau;
        string preguntad;
        string preguntat;
        string preguntac;
    public:
        Etapauno(){
            precioproducto = Etapa{};
            codigo = Etapa{};
            numerocliente = Sistema{};
            cvendedor = Etapa{};
            preguntau = " ¿Ya le llegó el producto?";
            preguntad = " ¿El vendedor esta en contacto?";
            preguntat = " ¿El codigo de rastreo es valido?";
            preguntac = " ¿El precio del producto es correcto?";
        }
    Etapauno(Etapa precioproducto, Etapa codigo, Etapa cvendedor, Sistema numerocliente, string preguntau, string preguntad,string preguntat,string preguntac){ 
        this -> precioproducto = precioproducto;
        this -> codigo = codigo;
        this -> cvendedor = cvendedor;
        this -> numerocliente = numerocliente;
        this -> preguntau = preguntau;
        this -> preguntad  = preguntad;
        this -> preguntat = preguntat;
        this -> preguntac = preguntac;
    }
    ~Etapauno(){ //DestructordeEtapa
    }
    string getPreguntau(){return preguntau;}
    string getPreguntad(){return preguntad;}
    string getPreguntat(){return preguntat;}
    string getPreguntac(){return preguntac;}
    Sistema getNumerocliente(){return numerocliente;}
    Etapa getPrecioproducto(){return precioproducto;}
    Etapa getCodigo(){return codigo;}
    Etapa getCvendedor(){return cvendedor;}
    //Setters
    void setNumerocliente(Sistema nm) {numerocliente = nm;}
    void setPrecioproducto(Etapa pp){precioproducto = pp;}
    void setCodigo(Etapa cdgr){codigo = cdgr;}
    void setPreguntau( string pru){preguntau = pru;}
    void setPreguntad(string prd){preguntad = prd;}
    void setPreguntat(string prt){preguntat = prt;}
    void setPreguntac(string prc){preguntac = prc;}

    void Enviarpre(){
        int numc = 10000;
        cout << preguntau << endl;
        cout << preguntad << endl;
        cout <<preguntat <<endl;
        cout <<preguntac <<endl;
        cout << "Manda al correo empresarial tus respuestas. (patito@sistemacompra.mx) junto con su numero de cliente: " << numc <<endl; 
    }
    void Reembolso(){
        int numc = 10000;
        int pp = 150;
        int cdg = 55678;
        int cvende = 678;

        cout << "El numero de cliente es: " << numc <<endl;
        cout << "El precio de su producto es: " << pp << endl;
        cout << "El codigo de su producto es: " << cdg << endl;
        cout << "En caso de reembolso, por favor contactar a su vendedor con los datos mostrados \n";
        cout << " Le recordamos que nosotros ya lo contactamos para su reembolso" << endl;
        cout <<"El numero del vendedor es " << cvende <<endl;
    }

    void contactarVendedor(int option){
        int cvende = 678;
        cout << "El vendedor: " <<  cvende << " ha sido contactado \n";
        cout << "¿Desea contactar al vendedor por si mismo? \n";
        cout << "1 Si \n";
        cout << "2 No \n";
        if (option == 1){
            cout << "Al vendedor se le brindara su codigo de cliente y el codigo del producto.\n";
            cout <<" Si el vendedor no se contacta con usted en 12 horas, mandar un correo a la direccion empresarial \n";
        }
        if (option == 2){
            cout << "Gracias por trabajar con nosotros, nos pondremos en contacto con el vendedor \n";
        }
        else{
            cout << "Eliga una opcion valida \n";

        }
    }
};
 #endif    