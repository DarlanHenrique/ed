#include <iostream>

using namespace std;

//ATIVIDADE 02
//void troca(int *a, int *b){
    //int aux = 0;
    //cout << "Digite a variavel A: ";
    //cin >> *a;
    //cout << endl << "Digite a variavel B: ";
    //cin >> *b;
    //aux = *b;
    //*b = *a;
    //*a = aux;
    //cout << "O valor de A e: " << *a << endl << "O valor de B e: " << *b ;
//}
//ATIVIDADE 02

//ATIVIDADE 03
//void divisao(int num, int div, int *q, int *r){
    //cout << "Digite um valor para num: ";
    //cin >> num;
    //cout << "Digite um valor para div: ";
    //cin >> div;
    //*q = num/div;
    //*r = num%div;
    //cout << "O dividendo e: " << num << endl << "O divisor e: " << div << endl << "O quociente e: " << *q << endl << "O resto e: " << *r << endl;
//}
//ATIVIDADE 03

//ATIVIDADE 04
//bool func(int tam, int vet[], int *par, int *impar, int *negativos){
    //for (int i = 0; i < tam; i++){
        //if (vet[i] < 0){
            //*negativos = *negativos + 1;
        //}
        //if (vet[i]%2 == 0){
            //*par = *par + 1;
        //}
        //else{
            //*impar = *impar + 1;
        //}
    //}
    //if(*negativos > 0){
        //return false;
    //}
    //else{
        //return true;
    //}
//}
//ATIVIDADE 04

int main()
{
//INICIO ATIVIDADE 01
    //int *pt =0,x;
    //cout << "O endereco de pt e: " << &pt << endl << "Digite um valor para x: ";
    //cin >> x;
    //pt = &x;
    //cout << "O conteudo da variavel pt e: " << pt << endl << "O endereco de x e: " << &x << endl;
    //*pt = *pt*10;
    //cout << "O conteudo da apontado pt e: " << *pt << endl;
    //*pt = *pt +10;
    //cout << "O conteudo da apontado pt e: " << *pt << endl << "O conteudo da variavel pt e: " << pt << endl;
//FIM ATIVIDADE 01

//INICIO ATIVIDADE 02
    //int *a = new int, *b = new int;
    //troca(a,b);
    //delete a;
    //delete b;
//FIM ATIVIDADE 02

//INICIO ATIVIDADE 03
    //int num = 0, div = 0, *q = new int, *r = new int;
    //divisao(num, div, q, r);
    //delete q;
    //delete r;
//FIM ATIVIDADE 03

//INICIO ATIVIDADE 04
    //int tam, vet[tam], *par = new int, *impar = new int, *negativos = new int;
    //cout << "Digite o tamanho do vetor: ";
    //cin >> tam;
    //for (int i = 0; i < tam; i++){
        //cout << endl << "Digite o " << i+1 << "º valor: ";
        //cin >> vet[i];
    //}
    //func(tam, vet, par, impar, negativos);
    //for (int i = 0; i < tam; i++){
        //cout << endl << "O "  << i+1 << "º valor e: " << vet[i];
    //}
    //cout << endl << "O valor de negativos e: " << *negativos << endl;
    //cout << "O valor de pares e: " << *par << endl;
    //cout << "O valor de imapares e: " << *impar << endl;

//FIM ATIVIDADE 04

    return 0;
}
