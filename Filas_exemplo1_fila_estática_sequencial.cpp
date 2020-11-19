//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int const MAX = 5;

//Variavéis de controle (inicio e fim)
class Fila
{
	private:
		int Inicio, Fim, desenfileirado;
		int fila[MAX];
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
};

bool Fila:: Fila_Vazia()
{
	if(Inicio > Fim)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fila:: Fila_Cheia()
{
	if(Fim == MAX - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Fila:: Fila_Enfileirar(int valor)
{
	if(Fila_Cheia())  //não pode inserir elementos
	{
		return false;
	}
	else
	{
		Fim++;  //possível enfileirar
		fila[Fim] = valor;
		return true;
	}
}

int Fila:: Fila_Desenfileirar()
{
	if(Fila_Vazia())  //não consegue desenfileirar caso esteja vazia
	{
		cout << endl << "Fila vazia" << endl;
	}
	else
	{
		desenfileirado = fila[Inicio];
        fila[Inicio] = NULL;                                                                          ;
		Inicio++; //A Inicio pula de posição
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
	return (Fim - Inicio) + 1; //Retorna a quantidade de elementos da Fila
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Valor;
	Fila f;

	f.Fila_Enfileirar(5);
	f.Fila_Enfileirar(2);
	f.Fila_Enfileirar(7);
	 
	cout << endl << "Tamanho da fila:  "<< f.Fila_Tamanho();
    cout << endl << "Desenfileirando...valor:  " << f.Fila_Desenfileirar();
    cout << endl << "Próximo valor a sair é:  " << f.Fila_GetHead() << endl;
    
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	cout << endl << "Desenfileirando...valor: " << f.Fila_Desenfileirar();
	cout << endl << "Próximo valor a sair é: " << f.Fila_GetHead() << endl;
	
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho();
	cout << endl << "Desenfileirando...valor: " << f.Fila_Desenfileirar();
	f.Fila_GetHead();
	cout << endl << "Tamanho da fila: " << f.Fila_Tamanho() << endl;
	
	system("pause");
	return 0;
}
