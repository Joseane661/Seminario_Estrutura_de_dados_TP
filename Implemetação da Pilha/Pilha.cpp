#include "Pilha.h"

// Exemplo contendo 5 n�meros inteiros

Pilha::Pilha(){
	
	size_Max = 4;          // Tamanho da pilha
	top = -1;             // Pilha vazia. 
    pilha = new int [5]; // Alocar um espa�o de 5 inteiros.
}

bool Pilha :: get_empty(){ // Verifica se a pilha est� vazia.
	
	if (top == -1){
					
		return true;
	}
	
	else {
		
		return false;
	}	
}

bool Pilha :: get_full(){ // Verifica se a pilha est� cheia.
	
	if (top == size_Max){
			
		return true;
	}
	
	else {
		
		return false;
	}	
}

void Pilha :: set_push(int elemento){ // Inser��o de elementos.
		
	if (!get_full()){
		
		pilha[++top] = elemento; 	
	}
	
	else {
		
		cout << "A pilha est� cheia!" << endl;
	}
}

void Pilha::pop(){ // Remo��o de elementos
	
	if(get_empty()){
		
		cout << "A pilha est� vazia!" << endl;		
	}
	
	else{
		
		top--;		
	}		
}

int Pilha :: get_top(){ // Retorno o elemento do topo da pilha.
	
	if(!get_empty()){
		
		return pilha[top];		
	}
	
	else {
		
		return -1;
	}			
}

int Pilha::get_size(){ // Retorna o tamanho da pilha.
	
	return top + 1; 
}

Pilha::~Pilha(){
		
	delete []pilha;	// Liberar a mem�ria alocada (Delete pilha).
	cout <<  endl << "Pilha exclu�da" << endl; 	
}
