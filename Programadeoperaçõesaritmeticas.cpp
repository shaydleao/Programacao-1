// Programa: Criar um programa para realizar as quatro operações aritméticas.

#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
    char opcao;
    inicio:
    int a,b,r,operacao;

    cout << "Por favor, digite o primeiro valor: ";
    cin >> a;
    cin.ignore();

    cout << "Por favor, digite o segundo valor: ";
    cin >> b;
    cin.ignore();

    cout << "Por favor, informe qual operação deseja realizar: \n 1.Adição \t2.Subtração \t3.Multiplicação \t4.Divisão \n \n => ";
    cin >> operacao;
    cin.ignore();
    system("cls");

        switch(operacao) 
        {   
            case 1: 
                r=a+b;
                cout << a << " + " << b << " = " << r << "\n\n";
                break;

            case 2: 
                r=a-b;
                cout << a << " - " << b << " = " << r << "\n\n";
                break;

            case 3:
                r=a*b;
                cout << a << " * " << b << " = " << r << "\n\n";
                break;

            case 4:
                r=a/b;
                cout << a << " / " << b << " = " << r << "\n\n";
                break;

            case 5:
                if(b == 0){
                     cout << a << " / " << b << "== 0";
                }else if(cout << "nao e possivel divisao por zero"){
                // Não é possivel divisão por zero
                }
        }    

    cout << "Voce deseja que este programa se repita [s/n] ? ";
    cin >> opcao;
    cin.ignore();
      if (opcao == 's' || opcao == 'S')
         goto inicio;
      else if (opcao == 'n' || opcao == 'N')
         goto fim;
      else goto inicio;
    fim:
    return EXIT_SUCCESS;
}
