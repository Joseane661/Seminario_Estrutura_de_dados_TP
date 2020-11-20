//Calculadora RPN ((reverse Polish notation = notação polonesa reversa)
//(1+2)*3 --> 1 2 + 3 *

//Incluindo bibliotecas
#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include <locale>

using namespace std;

int main ()
{

    setlocale(LC_ALL,"Portuguese");

    //Criando pilha
    stack <float> calculadora;

    //Definindo variáveis
    char operacao[100];
    char op;
    float numero(0), rhs(0), lhs(0), resultado(0);
    int j = 0;

    //Estabelecendo condição
    while(operacao[j] != ';')
    {

        cin >> operacao[j];

        if ((operacao[j] != '+') && (operacao[j] != '-') && (operacao[j] != '*') && (operacao[j] != '/'))
        {

            //Transformando char em float
            numero = atof(operacao);

            //Incluindo elemento na pilha
            calculadora.push(numero);
        }

        else
        {

            op = operacao[j];
            rhs = calculadora.top();
            calculadora.pop();
            lhs = calculadora.top();
            calculadora.pop();

            //Operações..
            switch (op)
            {

            case '+':

                resultado = rhs + lhs;
                calculadora.push(resultado);

                break;

            case '-':

                resultado = rhs - lhs;
                calculadora.push(resultado);

                break;

            case '*':

                resultado = rhs * lhs;
                calculadora.push(resultado);

                break;

            case '/':

                resultado = rhs / lhs;
                calculadora.push(resultado);

                break;

            default:

                cout << "Operador Inválido." << endl;
            }
        }
    }

    //Mostando resultado
    cout << resultado << endl;

    system("PAUSE");

    //Encerrendo programa
    return 0;
}

