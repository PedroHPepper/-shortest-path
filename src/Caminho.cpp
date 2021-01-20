#include "Caminho.h"




Caminho::Caminho(){
    popularMatriz();
    this->passos=0;

    this->x=this->linha-1;
    this->y=0;
}
//Caminho::~Caminho(){}


void Caminho::caminhar(int num){
    for(int i=0; i<this->linha; i++){
        for(int j=0; j<this->coluna; j++){
            if(this->matriz[i][j]==num){
                this->x2=i;
                this->y2=j;

                andar();
                return;
            }
        }
    }
}
void Caminho::andar(){
    while(this->x!=this->x2){
        if(this->x<this->x2){
            this->x++;

        }else{
            this->x--;
        }
        this->passos++;
    }
    while(this->y!=this->y2){
        if(this->y<this->y2){
            this->y++;
        }else{
            this->y--;
        }
        this->passos++;
    }
}
void Caminho::popularMatriz(){
    int num=this->coluna*this->linha;
    int num2;
    for(int i=0; i<this->linha; i++){
        num2 = num-(this->coluna-1);
        for(int j=0; j<this->coluna; j++){
            this->matriz[i][j]=num2;
            num2++;
        }
        num-=this->coluna;
    }
}

void Caminho::voltar(){
    caminhar(1);
}
