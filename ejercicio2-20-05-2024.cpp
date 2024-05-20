#include <iostream>
#include <cstdlib> // rad()%3
using namespace std;

int main()
{

    int jugador = 0, maquina, puntoj = 0, puntom = 0;
    cout << "Juguemos piedra, papel o tijera\n";
    for (int i = 0; i < 3; i++)
    {
        do
        {
            cout << "Elije entre piedra papel o tijera\n"
                 << "1.Piedra\n"
                 << "2.Papel\n"
                 << "3.Tijeras\n";
            cin >> jugador;
            if (jugador < 1 || jugador > 3)
            {
                cout << "Esa numero no es una opcion\n";
            }
        } while (jugador < 1 || jugador > 3);
        maquina = 1 + rand()%3;
        if (maquina == jugador)
        {
            cout << "Es un empate!\n";
        }else if(jugador==1&&maquina==3){
            cout<<" Ganastes!!\n";
            puntoj++;
        }else if(jugador==2&&maquina==1){
            cout<<" Ganastes!!\n";
            puntoj++;
        }else if(jugador==3&&maquina==2){
            cout<<" Ganastes!!\n";
            puntoj++;
        }else if(jugador==1&&maquina==2){
            cout<<" Perdistes :c\n";
            puntom++;
        }else if(jugador==2&&maquina==3){
            cout<<" Perdistes :c\n";
            puntom++;
        }else if(jugador==3&&maquina==1){
            cout<<" Perdistes :c\n";
        }
    }
if(puntoj>puntom){
  cout<<" Felicidades le has ganado a la maquina yeeei\n";
}else if(puntoj<puntom){
    cout<<" Perdistes contra la maquina, mejor suerte la proxima\n";
}
    return 0;
}