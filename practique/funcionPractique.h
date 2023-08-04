#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void ponerCeroVector(int v[],int tam);//Pone en cero el vector
void cargarVector(int v[],int tam);//Carga el vector
void mostrarVector(int v[],int tam);//muestra el vector
void modificarVector(int v[],int tam,int pos,int num);//modifica un numero del vector
void mayorVector(int v[],int tam); // el valor mayor del Array
void menorVector(int v[],int tam); // el valor menor del Array
void numerosPrimosVector(int v[],int tam); // muestra los numeros primos del vector
void cantidadNumeroVector(int v[],int tam,int num); //muestra la cantidad de veces que se repite el numero
void numerosPositivosVector(int v[],int tam); //muestra los numeros positivos en el vector
void numerosNegativosVector(int v[],int tam); //muestra los numeros negativos en el vector


void ponerCeroVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

void cargarVector(int v[],int tam){
    int i;

    for(i=0;i<tam;i++){
        cout<<"Ingrese numero"<<endl;
        cin>>v[i];
        cout<<endl;
    }
    system("cls");
}
void mostrarVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"Nro: "<<v[i]<<endl;
    }
    system("pause");
    system("cls");
}
void modificarVector(int v[],int tam, int pos, int num){
     int i, j;
     for(i=0;i<tam;i++){
        if(v[i]== pos){
            v[i]= num;
        }
     }
    for(j=0;j<tam;j++){
        cout<<"Nro: "<<v[j]<<endl;
    }
    system("pause");
    system("cls");
}

void mayorVector(int v[],int tam){
    int i, Mayor=v[0];
    for(i=1; i<tam;i++){
        if(v[i]> Mayor){
            Mayor = v[i];
        }
    }
    cout<<"El numero mayor en el vector fue: "<<Mayor<<endl;
    system("pause");
    system("cls");
}
void menorVector(int v[],int tam){
    int i, menor=v[0];
    for(i=1; i<tam;i++){
        if(v[i]< menor){
            menor = v[i];
        }
    }
    cout<<"El numero menor en el vector fue: "<<menor<<endl;
    system("pause");
    system("cls");
}
void numerosPrimosVector(int v[],int tam){
    int i,j,c;
    for(i=0;i<tam;i++){
        for(j=0;j<=v[i];j++){
            if(j%v[i]==0){
                c = c + 1;
            }
        }
    if(c==2) cout<<v[i]<<endl;
    c=0;

    }
    system("pause");
    system("cls");
}
void cantidadNumeroVector(int v[],int tam,int num){
    int i,c=0;
    for(i=0;i<tam;i++){
        if(num==v[i]){
            c++;
        }
    }
    cout<<"La cantidad de veces que se repite el numero "<<num<<" es: "<<c<<endl;
    system("pause");
    system("cls");
}
void numerosPositivosVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]>0){
            cout<<"Nro: "<<v[i]<<endl;
        }
    }
    system("pause");
    system("cls");
}
void numerosNegativosVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]<0){
            cout<<"Nro: "<<v[i]<<endl;
        }
    }
    system("pause");
    system("cls");
}

#endif // FUNCIONES_H_INCLUDED
