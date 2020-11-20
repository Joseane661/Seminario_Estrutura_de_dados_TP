#include <iostream>
#include<cstdlib>
#include <Locale>

using namespace std;

#include "Pilha.cpp"
#include "Pilha.h"

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	Pilha numero;
		
	if (numero.get_empty()){
		
		cout << endl<< "A pilha está vazia!" << endl << endl;
	}	
	
	cout << "Tamanho: " << numero.get_size() << endl;
		
	numero.set_push(1);
	numero.set_push(2);
	numero.set_push(3);
	numero.set_push(4);
	numero.set_push(5);
		
	cout << endl << "Elemento do topo: " << numero.get_top();	 
	cout << endl << "Tamanho: " << numero.get_size() << endl;	
	
	numero.pop();
	
	cout << endl << "Elemento do topo: " << numero.get_top(); 
	cout << endl << "Tamanho: " << numero.get_size() << endl;
	
	cout << endl<< "Elementos da pilha: ";
	
	while (!numero.get_empty()){
		
		cout << numero.get_top() << " ";
		numero.pop();		
	}
	
	cout << endl;
	
	if (numero.get_empty()){
		
		cout << endl<< "A pilha está vazia!" << endl << endl;
	}	
	
	system("pause");		
	return 0;
}
