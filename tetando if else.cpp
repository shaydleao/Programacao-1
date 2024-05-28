// Programa: criar um programa para testar o if e else.

#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
    int num01, num02, r, operacao;
    
    cout << "Digite o primeiro numero: ";
    cin >> num01;

    cout << "Digite o segundo numero: ";
    cin >> num02;

    cin >> operacao;
    cin.ignore();
    system("cls");

    switch(operacao);
    {
        r=num01+num02;
        cout << num01 << " + " << num02 << " = " << r << "\n\n";
        break;

        r=num01-num02;
        cout << num01 << " - " << num02 << " = " << r << "\n\n";
        break;

        r=num01*num02;
        cout << num01 << " * " << num02 << " = " << r << "\n\n";
        break;

        r=num01/num02;
        cout << num01 << " / " << num02 << " = " << r << "\n\n";
        break;

        if (num02 = 0)
            cout << " / "  num02  << " = 0 " << "\n\n";
         else
        {
            cout << num02 <<  "= 0"  << " impossivel divisao por zero " << "\n\n";
        }
    }
    system ("PAUSE");
    return;
}
