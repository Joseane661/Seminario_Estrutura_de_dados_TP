#include <iostream>
#include <string>
#include <locale>
#include <queue>//inclus�o da queue para manipula��o de filas

using namespace std;

//recebe uma fila por par�metro e imprime ela na tela.

void MostrarFila(queue<string>fila_pessoa)
{
    while(!fila_pessoa.empty()){
        //cout << fila_pessoa.empty() <<endl;
        cout << "Pr�xima pessoa a ser atendida: " << fila_pessoa.front()<<endl;
        fila_pessoa.pop();
    }

}

int main(){

    //push
    //front
    //pop
    //size
    //back
    //empty

    setlocale(LC_ALL,"");

    //vector <string> nomes_pessoas;

    //cria��o da fila
    queue <string> fila_pessoa;
    queue <string> animais;

    fila_pessoa.push("Martildes");
    fila_pessoa.push("Luciano");
    fila_pessoa.push("Davy");
    fila_pessoa.push("Rav�nia");
    fila_pessoa.push("Kleiton");
    fila_pessoa.push("Joseane");

    cout << "\tEXEMPLO 1 DE FILAS" <<endl<<endl;

    cout << "Quantidade de Pessoas na Fila: " << fila_pessoa.size() <<endl;//imprime tamanho da fila
    cout << "Primeira Pessoa da Fila: " << fila_pessoa.front() <<endl;//imprime o primeiro elemento da fila
    cout << "�ltima Pessoa da Fila: " << fila_pessoa.back() <<endl;//imprime o �ltimo elemento da fila

    //chamada do m�todo Mostrar Fila que recebe uma c�pia da fila
    //MostrarFila(fila_pessoa);

    cout << "In�cio do atendimento" <<endl;

    cout << fila_pessoa.empty() <<endl;
    MostrarFila(fila_pessoa);
    cout << fila_pessoa.empty() <<endl;
    //remo��o de um elemento da fila
    //fila_pessoa.pop();


    return 0;
}

