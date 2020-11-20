#include "Pilha.h"

// Exemplo contendo 5 números inteiros

Pilha::Pilha(){
	
	size_Max = 4;          // Tamanho da pilha
	top = -1;             // Pilha vazia. 
    pilha = new int [5]; // Alocar um espaço de 5 inteiros.
}

bool Pilha :: get_empty(){ // Verifica se a pilha está vazia.
	
	if (top == -1){
					
		return true;
	}
	
	else {
		
		return false;
	}	
}

bool Pilha :: get_full(){ // Verifica se a pilha está cheia.
	
	if (top == size_Max){
			
		return true;
	}
	
	else {
		
		return false;
	}	
}

void Pilha :: set_push(int elemento){ // Inserção de elementos.
		
	if (!get_full()){
		
		pilha[++top] = elemento; 	
	}
	
	else {
		
		cout << "A pilha está cheia!" << endl;
	}
}

void Pilha::pop(){ // Remoção de elementos
	
	if(get_empty()){
		
		cout << "A pilha está vazia!" << endl;		
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
		
	delete []pilha;	// Liberar a memória alocada (Delete pilha).
	cout <<  endl << "Pilha excluída" << endl; 	
}
