#include <iostream>
#include <string>
#include <locale>
#include <queue>//inclusão da queue para manipulação de filas

using namespace std;

//recebe uma fila por parâmetro e imprime ela na tela.

void MostrarFila(queue<string>fila_pessoa)
{
    while(!fila_pessoa.empty()){
        //cout << fila_pessoa.empty() <<endl;
        cout << "Próxima pessoa a ser atendida: " << fila_pessoa.front()<<endl;
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

    //criação da fila
    queue <string> fila_pessoa;
    queue <string> animais;

    fila_pessoa.push("Martildes");
    fila_pessoa.push("Luciano");
    fila_pessoa.push("Davy");
    fila_pessoa.push("Ravânia");
    fila_pessoa.push("Kleiton");
    fila_pessoa.push("Joseane");

    cout << "\tEXEMPLO 1 DE FILAS" <<endl<<endl;

    cout << "Quantidade de Pessoas na Fila: " << fila_pessoa.size() <<endl;//imprime tamanho da fila
    cout << "Primeira Pessoa da Fila: " << fila_pessoa.front() <<endl;//imprime o primeiro elemento da fila
    cout << "Última Pessoa da Fila: " << fila_pessoa.back() <<endl;//imprime o último elemento da fila

    //chamada do método Mostrar Fila que recebe uma cópia da fila
    //MostrarFila(fila_pessoa);

    cout << "Início do atendimento" <<endl;

    cout << fila_pessoa.empty() <<endl;
    MostrarFila(fila_pessoa);
    cout << fila_pessoa.empty() <<endl;
    //remoção de um elemento da fila
    //fila_pessoa.pop();


    return 0;
}

