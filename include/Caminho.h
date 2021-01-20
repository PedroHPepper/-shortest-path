#ifndef CAMINHO_H
#define CAMINHO_H


class Caminho
{
    public:


        int x, y;
        int x2, y2;
        int passos;

        void caminhar(int);
        void voltar();
        Caminho();
        //virtual ~Caminho();


    protected:

    private:
        int linha=3;
        int coluna = 7;
        int matriz[3][7];
        void popularMatriz();
        void andar();
};

#endif // CAMINHO_H
