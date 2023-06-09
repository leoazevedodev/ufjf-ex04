#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m, int i);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();

        // exercicio 2
        // implemente aqui
        void setIdade(int i);
        int getIdade();

        void setMatricula(string m);
        string getMatricula();

        // exercicio 5
        void leFrequencia();

        // exercicio 6

        void getRelatorio();

    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 3

        // exercicio 4
        bool frequencia[7];
};

#endif // ALUNO_H
