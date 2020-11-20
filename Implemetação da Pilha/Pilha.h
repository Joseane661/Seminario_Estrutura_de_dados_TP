#ifndef PILHA_H
#define PILHA_H

class Pilha{	

	private:
			
		int size_Max;   // Tamanho M�ximo da pilha
		int top;       //  Inteiro que dica a posi��o do topo da pilha.
		int *pilha;   //   Ponteiro que ir� apontar para o endere�o dos elementos da pilha.
				
	public:
		
		 Pilha();     // Construtor default
		~Pilha();    // Deleta o vetor e libera a memoria alocada (Pilha � destru�da).
	
		void set_push(int);     // (M�todo para empilhar elementos) 
		void pop();            // (M�todo para Desempilhar elementos) 
		
		int  get_top();      // Retorna o elemento do topo da pilha
		int  get_size();    // Retorna o tamanho da pilha
		bool get_empty();  //  Verificar se a pilha esta vazia
		bool get_full();  //  Verificar se a piha esta cheia 
};

#endif
