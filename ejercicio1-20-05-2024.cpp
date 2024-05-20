#include <iostream>

using namespace std;

int main(){

int numero=0,factorial=1;

cout<<"Bienveido al programa para calcular numeros factoriales\n";
cout<<"Favor ingrese un numero para calcular su factorial\n";


do{
    cin>>numero;
    if(numero<=0){
        cout<<"El numero no puede ser negativo o cero\n";
    }
}while (numero<=0);

for (int i = 1; i <= numero; i++)
{
    factorial *= i;
}

cout<<"El factorial de "<<numero<<" es "<<factorial;



    return 0;
}