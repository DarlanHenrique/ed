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
        // implemente aqui
        bool frequencia[7];

        void setRelatorio();

    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 3
        // implemente aqui

        // exercicio 4
        // implemente aqui
};

#endif // ALUNO_H
