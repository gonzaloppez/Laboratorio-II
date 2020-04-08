#include <iostream>
#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

#include "rlutil.h"


using namespace rlutil;
using namespace std;

struct producto{

int id;
char nombre[30];
float precio;
int stock;
int stock_min;
};
#include "funciones.h"

int cant_p=2;
void menuProducto()
{
    int opc;
    producto v[cant_p]={0};

    while(true)
{
    cls();
cout<< "*******MENU PRODUCTO*******"<<endl;
cout<< "-----------------------------------------------"<<endl;
cout<< "1 - Cargar producto"<<endl;
cout<< "2 - Editar producto X ID"<<endl;
cout<< "3 - Listar producto X ID"<<endl;
cout<< "4 - Listar productos (ordenados por precio)"<<endl;
cout<< "5 - Mostrar"<<endl;
cout<< "-----------------------------------------------"<<endl;
cout<< "Ingrese una opcion: ";
cin>>opc;
cout<<endl;

    switch(opc){
    case 1:
        cargarProducto(v,cant_p);
        anykey();
        break;
    case 2:
        editarProducto(v,cant_p);
        anykey();
        break;
    case 3:
        puntoTres(v,cant_p);
        anykey();
        break;
    case 4:
        ordenarVector(v,cant_p);
        break;
    case 5:
        mostrarProducto(v,cant_p);
        anykey();
        break;
    case 0:
        return;
    }
}
cout<<endl;
}
#endif // PRODUCTO_H_INCLUDED
