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
    // Implemente sua solucao aqui

    for(int i = 0; i<7;i++){
        cout << endl << "Digite aqui a " << i+1 << "ª Nota: ";
        cin >> notas[i];
        cout << endl << "Digite aqui a Frequencia da " << i+1 << "ª Nota: ";
        cin >> frequencia[i];
    }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    double m = 0;
    for(int i = 0; i<7;i++){
        m = m + notas[i];
    }
    return m/7;
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

// Implemente aqui a sua solucao

void Aluno::setMatricula(string novo)
{
    matricula = novo;
}

string Aluno::getMatricula()
{
    return matricula;
}

void Aluno::setIdade(int novo)
{
    idade = novo;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setRelatorio(){
    for (int i = 0; i < 7; i++){
        if(frequencia[i] == true){
            cout << "Na prova " << i+1 << " o aluno estava: Presente." << endl;
            if (notas[i] >= 60){
                cout << "Na disciplina " << i+1 << " o aluno foi: Aprovado." << endl;
            }
            else{
                cout << "Na disciplina " << i+1 << " o aluno foi: Reprovado." << endl;
            }
        }
        else{
            cout << "Na prova " << i+1 << " o aluno estava: Ausente." << endl;
            cout << "Na disciplina " << i+1 << " o aluno foi: Reprovado." << endl;
        }

    }
}
// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

