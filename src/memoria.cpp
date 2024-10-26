#include <iostream>
#include <TazoDorado.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    // int   entero=8;
    // bool  booleano = true;
    // char  letra = 'A';
    // float decimal = 0.5;

    // cout<<"Tamaño Entero: "<< sizeof(entero)<<endl;
    // cout<<"Tamaño booleano: "<< sizeof(booleano)<<endl;
    // cout<<"Tamaño letra: "<< sizeof(letra)<<endl;
    // cout<<"Tamaño decimal: "<< sizeof(decimal)<<endl;
    // cout<<"Tamaño Tazo: "<< sizeof(TazoDorado)<<endl;
    // cout<<endl;

    // TazoDorado tazo1;
    // TazoDorado tazo2;
    // cout << "Dirección Tazo1: "<< &tazo1<<endl;
    // cout << "Dirección Tazo2: "<< &tazo2<<endl;

    // TazoDorado tazos[20];
    // for (size_t i = 0; i < 20; i++){
    //     cout<<"Dirección tazo "<<i<<"; "<< &tazos[i] <<endl;
    //     }

    //     void* direccion = malloc(1);

    /// C ---------------------------
    TazoDorado* direccion;
    direccion = (TazoDorado *) malloc(sizeof (TazoDorado));
    direccion->Inicializar();
    cout << "Valor en dirección:   " << direccion->Flotando(); << endl;

    /// c++ -----------------------------------
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
    cout << "Valor en dirección:   " << direccion2->Flotando(); << endl;


    return 0;
}
