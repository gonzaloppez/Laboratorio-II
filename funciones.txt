#include <iostream>
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "producto.h"

using namespace std;

void cargarProducto (producto *v, int tam){
    int cont=0;
    int chequeo=0;

    while (cont<2){
    cout<<"ID: ";
    cin>>chequeo;
    for (int i=0;i<tam;i++){
        if(v[i].id==chequeo){
            cout<<"Mismo ID, ingresar otro: ";
        cin>>chequeo;
        }
    }
    v[cont].id=chequeo;
    cout<<"nombre: ";
    cin>>v[cont].nombre;
    cout<<"precio: ";
    cin>>v[cont].precio;
    cout<<"Stock: ";
    cin>>v[cont].stock;
    cout<<"Stock minimo: ";
    cin>>v[cont].stock_min;
    cont++;
    }
}

void editarProducto(producto *v,int cant_p){
        int idbuscar;
        cout<<"Ingresar ID a editar: ";
        cin>>idbuscar;
            for (int i=0;i<cant_p;i++){
                if(v[i].id==idbuscar){
                    cout<<v[i].id<<endl;
                    cout<<"nombre: ";
                    cin>>v[i].nombre;
                    cout<<"precio: ";
                    cin>>v[i].precio;
                    cout<<"Stock: ";
                    cin>>v[i].stock;
                    cout<<"Stock minimo: ";
                    cin>>v[i].stock_min;
            break;
        }
    }
    cout<<"ID no existe!";
}





void puntoTres (producto *v,int cant_p){
        int idbuscar;
        cout<<"Ingresar ID a buscar: ";
        cin>>idbuscar;
            for (int i=0;i<cant_p;i++){
                if(v[i].id==idbuscar){
                    cout<<v[i].id<<endl;
                    cout<<v[i].nombre<<endl;
                    cout<<v[i].precio<<endl;
                    cout<<v[i].stock<<endl;
                    cout<<v[i].stock_min<<endl;
                    break;
        }

    }
    cout<<"No se encuentra ID";
}

void ordenarVector(producto *v,int cant_p){
        producto aux;
        aux.precio=0;
        aux.id=0;
        aux.nombre[30]='a';
        aux.stock=0;
        aux.stock_min=0;
        for (int i=0;i<cant_p;i++){
            if(v[i].precio<v[i+1].precio){
                aux.precio=v[i].precio;
                aux.id=v[i].id;
                aux.nombre[30]=v[i].nombre[30];
                aux.stock=v[i].stock;
                aux.stock_min=v[i].stock_min;
                v[i].precio=v[i+1].precio;
                v[i].id=v[i+1].id;
                v[i].nombre[30]=v[i+1].nombre[30];
                v[i].stock=v[i+1].stock;
                v[i].stock_min=v[i+1].stock_min;
                v[i+1].precio=aux.precio;
                v[i+1].id=aux.id;
                v[i+1].nombre[30]=aux.nombre[30];
                v[i+1].stock=aux.stock;
                v[i+1].stock_min=aux.stock_min;
            }
        }

}


void mostrarProducto(producto *v,int cant_p){

    for (int i=0;i<2;i++){
        cout<<v[i].id<<endl;
        cout<<v[i].nombre<<endl;
        cout<<v[i].precio<<endl;
        cout<<v[i].stock<<endl;
        cout<<v[i].stock_min<<endl;
    }

}




#endif // FUNCIONES_H_INCLUDED
