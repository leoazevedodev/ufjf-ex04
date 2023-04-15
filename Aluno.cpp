#include "Aluno.h"

Aluno::Aluno(string n, string m, int i)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
    idade = i;
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

void Aluno::setIdade(int i)
{
    idade = i;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setMatricula(string m)
{
    matricula = m;
}

string Aluno::getMatricula()
{
    return matricula;
}

// ----------------------------------------------------------------------------
// Exercicio 5
// ----------------------------------------------------------------------------

void Aluno::leFrequencia()
{
    cout << "Digite 1 para true e 0 para false" << endl;
    int aux;
    for(int i =0; i< 7; i++)
    {
        cout << "Disciplina " << i + 1 << " ele foi frequente?: ";
        cin >> aux;
        if(aux == 0)
        {
            frequencia[i] = false;
        }
        else if (aux == 1)
        {
            frequencia[i] = true;
        }
        else
        {
            frequencia[i] = false;
            cout<< "Vc nao pode colocar valores diferentes de 1 ou 0" << endl;
        }
    }
}

// ----------------------------------------------------------------------------
// Exercicio 6
// ----------------------------------------------------------------------------

void Aluno::getRelatorio()
{
    cout << "-----------------------------------------" << endl;
    cout << "O Nome do aluno e: " << nome << endl;
    cout << "A Idade do aluno e: " << idade << endl;
    cout << "A Matricula do aluno e: " << matricula << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << "Disciplina: " << i + 1 << endl;
        if(frequencia[i] == true)
        {
            cout << "Frequente // " ;
        }
        else {
            cout << "Nao Frequente // " ;
        }
        if(notas[i] >= 60)
        {
            cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    }
    cout << "-----------------------------------------" << endl;
}


