#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
        //Aluno a("Carlos", "201566123AB", 20);

        //a.leNotas();
        //double m = a.calculaMedia();

        //cout << "Media do aluno: " << m << endl;
    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------
        //cout << "A idade do aluno e: " << a.getIdade() << endl;
        //cout << "A Matricula do aluno e: " << a.getMatricula() << endl;
    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------
        //a.leFrequencia();
    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------
        //cout << "Imprimindo Relatorio" << endl;
        //a.getRelatorio();
    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

        Prova p(5);
        cout << "Montando Prova, digite os valores das quetoes" << endl;
        p.leNotas();

        cout << "Calculando a Nota Final" << endl;
        p.calculaNotaFinal();

        cout << "A Nota fianl da prova e: " << p.obtemNotaFinal() << endl;



    return 0;
}
