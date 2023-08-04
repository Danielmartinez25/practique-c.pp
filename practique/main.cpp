#include <iostream>

using namespace std;
#include "funcionPractique.h"
int main()
{
    int opc, v[10],pos,num,numVerificar;
    while(true){
    cout<<"******************"<<endl;
    cout<<"1_Cargar vector"<<endl;
    cout<<"2_Mostrar vector"<<endl;
    cout<<"3_Modificar vector"<<endl;
    cout<<"4_Mayor vector"<<endl;
    cout<<"5_Menor vector"<<endl;
    cout<<"6_Numero de primos vector"<<endl;
    cout<<"7_Cantidad de veces que se repite x numero vector"<<endl;
    cout<<"8_Mostrar positivos vector"<<endl;
    cout<<"9_Mostrar negativos vector"<<endl;
    cout<<"0_Salir"<<endl;
    cout<<"******************"<<endl;
    cin>>opc;
    system("cls");
    switch(opc){
        case 1: cargarVector(v,10);
        break;
        case 2: mostrarVector(v,10);
        break;
        case 3:
            cout<<"Ingrese posicion a modificar"<<endl;
            cin>>pos;
            cout<<"Ingrese numero a modificar"<<endl;
            cin>>num;
            modificarVector(v,10,pos,num);
        break;
        case 4: mayorVector(v,10);

        break;
        case 5: menorVector(v,10);
        break;
        case 6: numerosPrimosVector(v,10);
        break;
        case 7:
            cout<<"Ingrese numero: "<<endl;
            cin>>numVerificar;
            cantidadNumeroVector(v,10,numVerificar);
        break;
        case 8: numerosPositivosVector(v,10);
        break;
        case 9: numerosNegativosVector(v,10);
        break;
        case 0: cout<<"Termino"<<endl;
                return 0;
        break;
    }

    }
return 0;

}
