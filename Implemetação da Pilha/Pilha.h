#ifndef PILHA_H
#define PILHA_H

class Pilha{	

	private:
			
		int size_Max;   // Tamanho Máximo da pilha
		int top;       //  Inteiro que dica a posição do topo da pilha.
		int *pilha;   //   Ponteiro que irá apontar para o endereço dos elementos da pilha.
				
	public:
		
		 Pilha();     // Construtor default
		~Pilha();    // Deleta o vetor e libera a memoria alocada (Pilha é destruída).
	
		void set_push(int);     // (Método para empilhar elementos) 
		void pop();            // (Método para Desempilhar elementos) 
		
		int  get_top();      // Retorna o elemento do topo da pilha
		int  get_size();    // Retorna o tamanho da pilha
		bool get_empty();  //  Verificar se a pilha esta vazia
		bool get_full();  //  Verificar se a piha esta cheia 
};

#endif
