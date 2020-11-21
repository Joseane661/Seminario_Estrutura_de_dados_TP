#include <iostream>
#include <deque>//Inclusão da fila Dupla

using namespace std;

int main()
{
    //podemos usar iteradores (begin/end)
    //diferentes formas na declaração
    //push_back/push_front
    //pop_back/pop_front
    //front/back
    //empty
    //clear
    //erase
    //insert

    //declações do Deque
	deque<int> filaDupla1;
	deque <int> filaDupla2(3,5);// 5 5 5
	//deque <int> filaDupla3(filaDupla1);
	deque <int> filaDupla3;
	//deque <int> filaDupla4 = {10,20,30};

	//declaração do tipo de iterator
	deque <int>::iterator it;

	cout << "Fila Dupla 2" <<endl;
    for(it = filaDupla2.begin();it!=filaDupla2.end();it++){
        cout << *it << " ";
    }
    cout <<endl;

    it = filaDupla2.end();
    filaDupla2.erase(it);
    for(it = filaDupla2.begin();it!=filaDupla2.end();it++){
        cout << *it << " ";
    }

	cout << "\nFila Dupla1 antes de inserir os elementos: ";
	if(filaDupla1.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";
     // 330 20 100
	// inserir elementos ao final da fila
	filaDupla1.push_back(20);
	filaDupla1.push_back(100);
	// inserir elemento no início da fila
	filaDupla1.push_front(330);
     // 0 1 2
	cout << "Testando Couts: FilaDupla1" <<endl;
	cout << filaDupla1[1] <<endl;
    cout << filaDupla1.at(1) <<endl;
    cout << filaDupla1.front()<<endl;
    cout << filaDupla1.back()<<endl;

    filaDupla3.assign(filaDupla1.begin(),filaDupla1.end());

    cout << "FIlaDupla3: ";
    it = filaDupla3.begin();
    while(it != filaDupla3.end())
		cout << *it++ << " ";

    cout<<endl<<endl;

    //filaDupla3.assign(2,1); 1 1

	cout << "\nDepois de inserir os elementos na FilaDupla1: ";

	if(filaDupla1.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";

	cout << "\nMostrando os elementos (SWAP) da fila Dupla 1: ";
    filaDupla2.swap(filaDupla1);
	it = filaDupla1.begin();
	while(it != filaDupla1.end())
		cout << *it++ << " ";

	cout << "\n";

	it = filaDupla2.begin();
	while(it != filaDupla2.end())
		cout << *it++ << " ";

	// limpar toda a fila
	filaDupla1.clear();

	cout << "\nDepois de limpar a filaDupla1 a fila: ";
	if(filaDupla1.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";

	// inserir elementos // 100 80 130
	filaDupla1.push_front(80);
	filaDupla1.push_front(100);
	filaDupla1.push_back(130);

	// removendo o segundo elemento
	filaDupla1.erase(filaDupla1.begin()+1);

	cout << "\nMostrando os elementos da FilaDupla1: ";
	it = filaDupla1.begin();
	while(it != filaDupla1.end())
		cout << *it++ << " ";

	cout << "\n\nElemento da frente da FilaDupla1: " << filaDupla1.front();
	cout << "\n\nUltimo elemento da FilaDupla1: " << filaDupla1.back();

	it = filaDupla1.begin() + 1;
	filaDupla1.insert(it, 10);

	cout << "\n\nMostrando os elementos da FilaDupla1: ";

	it = filaDupla1.begin();
	while(it != filaDupla1.end())
		cout << *it++ << " ";

	// remover do início
	filaDupla1.pop_front();
	// remover do final
	filaDupla1.pop_back();

	cout << "\n\nTamanho da filaDupla1: " << filaDupla1.size() << endl;

	return 0;
}
