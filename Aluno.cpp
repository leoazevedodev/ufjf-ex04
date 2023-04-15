#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    for(int i = 0; i < 7; i++)
    {
        cout << "Digite a nota " << i + 1 << " : ";
        cin >> notas[i];
    }
}

double Aluno::calculaMedia()
{
    float soma = 0;
    for(int i = 0; i < 7; i++)
    {
        soma = soma + notas[i];
    }

    return soma/7;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

void Aluno::setIdade(int _idade)
{
    idade = _idade;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setMatricula(string _matricula)
{
    matricula = _matricula;
}

string Aluno::getMatricula()
{
    return matricula;
}

// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

