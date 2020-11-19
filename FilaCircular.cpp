//Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int const TAM = 2;

//Variavéis de controle (inicio e fim)
class Fila
{
	private:
		int Inicio, Fim, qntd_elementos, desenfileirado;
		int fila[TAM];
    public:
			Fila ();
			bool Fila_Vazia ();
			bool Fila_Cheia();
			bool Fila_Enfileirar (int);
			int Fila_Desenfileirar ();
			int Fila_GetHead ();
			int Fila_Tamanho ();

};


//Inicia as variáveis Inicio e Fim

//construtor
Fila:: Fila()
{
	Inicio = 0; // Posição inicial da fila
	Fim = -1; // Para desinfileirar
	qntd_elementos = 0;
};

bool Fila:: Fila_Vazia()
{
	return this-> qntd_elementos == 0;
}

bool Fila:: Fila_Cheia()
{
	return this->qntd_elementos == TAM;
}


bool Fila:: Fila_Enfileirar(int valor)
{
	if(Fila_Cheia())  //não pode inserir elementos
	{
		return false;
	}
	else
	{
		Fim = (Fim + 1) % TAM;  //possível enfileirar
		qntd_elementos++;
		fila[Fim] = valor;
		return true; 
	}
}

int Fila:: Fila_Desenfileirar()
{
	if(Fila_Vazia())  //Não consegue desenfileirar caso esteja vazia
	{
		cout << endl << "Fila vazia" << endl;
	}
	else
	{
        desenfileirado = fila[Inicio];
        fila[Inicio] = NULL;
		Inicio = (Inicio + 1) % TAM;
		qntd_elementos--; //A Inicio pula de posição
		return desenfileirado;
	}
}

int Fila:: Fila_GetHead()
{
	if(Fila_Vazia())
	{
		cout << endl << "Fila vazia" << endl;
	}
	else
	{
		return fila[Inicio];
	}
}

int Fila:: Fila_Tamanho()
{
	return this-> qntd_elementos; //Retorna a quantidade de elementos da Fila
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Valor;
	Fila f;

	f.Fila_Enfileirar(5);
	f.Fila_Enfileirar(2);

	cout << endl << "Tamanho da fila:  "<< f.Fila_Tamanho();
    cout << endl << "Desenfileirando, o valor que saiu foi:  " << f.Fila_Desenfileirar();
    f.Fila_Enfileirar(20);
    cout << endl << "Próximo valor a sair é:  " << f.Fila_GetHead() << endl;
    
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	cout << endl << "Desenfileirando, o valor que saiu foi: " << f.Fila_Desenfileirar();
	f.Fila_Enfileirar(12);
	cout << endl << "Próximo valor a sair é: " << f.Fila_GetHead() << endl;
	
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	cout << endl << "Desenfileirando, o valor que saiu foi: " << f.Fila_Desenfileirar();
	cout << endl << "Próximo valor a sair é: " << f.Fila_GetHead() << endl;
	
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	cout << endl << "Desenfileirando, o valor que saiu foi: " << f.Fila_Desenfileirar();
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	f.Fila_GetHead();
	
	system("pause");
	return 0;
}

