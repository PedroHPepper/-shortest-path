#include <iostream>
#include <Caminho.h>

using namespace std;

int main(int argc, char** argv)
{
    int numeros, num;
    int i=0;
    Caminho caminho;
    while(i==0){
        cout<<"Digite a quantidade de numeros a serem inseridos: ";
        cin>>numeros;
        while(numeros!=0){
            cout<<"Insira um num: ";
            cin>>num;

            caminho.caminhar(num);


            numeros--;
        }
        caminho.voltar();
        cout<<"Passos = " << caminho.passos<<"\n";
        caminho.passos=0;
    }


    return 0;
}
