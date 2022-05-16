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
    Aluno a("Carlos", "201566123AB", 22);
    // ------------------------------------------------------------------------
    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();
    bool f = a.frequencia;

    cout << "Media do aluno: " << m << endl;


    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui

    // EXERCICIO 3
    // ------------------------------------------------------------------------

    // Implemente aqui
    cout << "RELATORIO DO ALUNO:" << endl;
    cout << "Nome do Aluno: " << a.getNome() << endl;
    cout << "Matricula do Aluno: " << a.getMatricula() << endl;
    cout << "Idade do Aluno: " << a.getIdade() << endl;
    a.setRelatorio();


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);


    return 0;
}
