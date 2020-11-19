#include <iostream>
#include <string>
#include <locale>
#include <queue>

using namespace std;

int main(){

    setlocale(LC_ALL,"");
    
    queue <string> fila_pessoa;
// enfileirando
    fila_pessoa.push("Martildes");
    fila_pessoa.push("Luciano");
    fila_pessoa.push("Davy");
    fila_pessoa.push("Ravânia");
    fila_pessoa.push("Kleiton");
    fila_pessoa.push("Joseane");

    cout << "\tEXEMPLO 1 DE FILAS" <<endl<<endl;
    
    cout<<"******************* FILA ********************"<<endl<<endl;

    cout << "Quantidade de Pessoas na Fila: " << fila_pessoa.size() <<endl<<endl;// mostrar o tamanho da fila
    
    // mostrar primeiro e último da fila
    cout << "Primeira Pessoa da Fila: " << fila_pessoa.front() <<endl;
    cout << "Última Pessoa da Fila: " << fila_pessoa.back() <<endl<<endl;

    while(!fila_pessoa.empty()){
        cout << "Próxima pessoa a ser atendida: " << fila_pessoa.front()<<endl;
        fila_pessoa.pop();
        
        cout<<endl;
    }
    
    // mostrar fila vazia
	if(fila_pessoa.empty())
		cout << "A fila está vazia" << endl;
    return 0;
}
