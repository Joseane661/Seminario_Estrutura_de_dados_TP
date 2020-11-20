//Incluindo bibliotecas
#include <iostream>
#include <locale>
#include <cstdlib>
#include <stack>

using namespace std;


//Fun��o que mostra a pilha Carrinho
void MostrarPilha(stack<string>Carrinho)
{
    cout << "Itens no carrinho:" << endl;

    while (!Carrinho.empty())
    {
        cout <<endl<< Carrinho.top() << " ";
        Carrinho.pop();
    }
}

int main()
{
    //Criando Pilha
    stack < string > Carrinho;

    //Definindo vari�veis
    string produto;

    //Imprimindo fun��o do programa
    cout<<endl<<"FAZENDO AS COMPRAS..."
        <<endl<<endl
        <<"------"
        <<endl<<"     |            |"
        <<endl<<"     |            |"
        <<endl<<"     |            |"
        <<endl<<"      ------------"
        <<endl<<"     |            |"
        <<endl<<"    0 0          0 0"
        <<endl<<endl;

    //Inserindo elementos na pilha
    cout<<endl<<"Insira um produto : ";
    cin>>produto;
    Carrinho.push(produto);

    cout<<endl<<"Insira um produto : ";
    cin>>produto;
    Carrinho.push(produto);

    cout<<endl<<"Insira um produto : ";
    cin>>produto;
    Carrinho.push(produto);

    cout<<endl<<"Sabonete ADICIONADO ";
    Carrinho.push("Sabonete");
    cout<<endl;

    system("pause");
    system("cls");

    //Fun��o que mostra todos os elementos da pilha
    MostrarPilha(Carrinho);

    //Mostrando tamanho e topo da pilha
    cout<<endl<<endl<<"Tamanho da pilha : "<<Carrinho.size()
        <<endl<<"Elemento do topo: "<<Carrinho.top();

    //Removendo o item do topo da pilha
    Carrinho.pop();

    cout<<endl<<endl<<"Sabonete REMOVIDO ";
    cout<<endl<<endl;

    MostrarPilha(Carrinho);

    //Fun��o que mostra todos os elementos da pilha
    cout<<endl<<"Tamanho da pilha : " <<Carrinho.size()<<endl
        <<endl<<"Elemento do topo: "<<Carrinho.top();;

    //Verificando se a pilha est� vazia
    if(Carrinho.empty())
        cout<<endl<<"Pilha vazia!";
    else
        cout<<endl<<"Pilha com elementos";

    //Encerrando programa
    return 0;
}
