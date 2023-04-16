#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    cout << "Criando uma prova" << endl;
    n = nq;
    notasQuestoes = new double [n];
}

void Prova::leNotas()
{
    for(int i = 0; i < n; i++)
    {
        cout << "Nota da questao " << i+1 << " : " ;
        cin >> notasQuestoes[i];
    }
}

void Prova::calculaNotaFinal()
{
    for(int i = 0; i < n; i++)
    {
        notaFinal = notaFinal + notasQuestoes[i];
    }
}

double Prova::obtemNotaFinal()
{
    return notaFinal;
}

Prova::~Prova()
{
    cout << "Destruindo uma prova" << endl;
    delete [] notasQuestoes;
}

